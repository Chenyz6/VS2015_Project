#pragma once

#include <iostream>
#include <vector>
#include <utility>
#include <stack>
#include <typeinfo>

#define CLOSE 0
#define OPEN 1

using namespace std;

class Node
{
public:
    int h;
    int g;
    int open_state;
    int index; //open表中的index
    int parent_index;
    Node() : g(0), index(0), parent_index(0), open_state(OPEN){};
    virtual void update_h()=0;
    virtual void print_one_node(Node &node) const = 0;
    virtual void run_(vector<Node*> &nodes)=0;
    virtual bool operator==(Node&)=0;
    friend Node *get_optimal_node(vector<Node *> &nodes, Node *node);
    void run(vector<Node *> &open);
    void print(vector<Node *> &open);
    Node *exit_node(vector<Node *> &nodes);
};

Node *get_optimal_node(vector<Node *> &nodes);
