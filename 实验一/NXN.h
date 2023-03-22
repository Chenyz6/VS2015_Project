#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include "astar_algorithm.h"


#define NN 3

using namespace std;

class Node_nn : public Node
{
    pair<int, int> pos;            //where zero is on 
    vector<int> direct;      //up,down,left,right
    vector<int> used_direct; //up,down,left,right
    vector<vector<int>> matrix;
public:
    Node_nn()=default;
    Node_nn(vector<vector<int>> &&p);
    void update_direct();
    void update_h() override;
    bool operator==(Node &) override;
    void print_one_node(Node &node) const override;
    void run_(vector<Node *> &open) override;
};
