#include "NXN.h"

using namespace std;

vector<vector<int>> dst_matrix{     //destination state
     { 1, 0, 3, 9},
     { 8, 2, 4,11},
     { 7, 6, 5,10},
     {12,15,14,13},
};
//vector<vector<int>> dst_matrix{     //destination state
//	{ 0, 1, 2},
//	{ 3, 4, 5},
//	{ 6, 7, 8}
//};

Node_nn::Node_nn(vector<vector<int>> &&p)
 : pos({0, 0}), direct({1, 1, 1, 1}), used_direct({0, 0, 0, 0}),matrix(p)
{
    for (int i = 0; i < NN; ++i)
        for (int j = 0; j < NN; ++j)
            if (p[i][j] == 0)
            {
                pos.first = i;
                pos.second = j;
            }
}

void Node_nn::update_h()
{
    int temp_h = 0;
    for (int i = 0; i < NN; i++)
        for (int j = 0; j < NN; j++){
            if (0 == (matrix[i][j] + dst_matrix[i][j]))
                continue;
            temp_h = temp_h + !(matrix[i][j] == dst_matrix[i][j]);
        }

    h = temp_h;
}

void Node_nn::update_direct()
{
    if (pos.first == 0)direct[0] = 0;
    if (pos.first == (NN - 1))direct[1] = 0;
    if (pos.second == 0)direct[2] = 0;
    if (pos.second == (NN - 1))direct[3] = 0;
}

bool Node_nn::operator==(Node & node)
{
    Node_nn& node_nn = dynamic_cast<Node_nn&>(node);
    return node_nn.matrix == matrix;
}

void Node_nn::print_one_node(Node & node) const
{
    try{
        Node_nn node_nn = dynamic_cast<Node_nn &>(node);
        for (auto &i : node_nn.matrix)
        {
            for (auto &j : i)
                cout << j << " ";
            cout << endl;
        }
    }
    catch (bad_cast)
    {
        cout << __LINE__ << "Bad cast" << endl;
        exit(1);
    }
}

void Node_nn::run_(vector<Node *> &open)
{
    update_direct();
    for (int i = 0; i < 4; i++)
    {
        if (direct[i] && (used_direct[i] == false))
        {
            Node_nn* node = new Node_nn();
            node->matrix= matrix;
            node->pos = pos;
            node->used_direct = {0, 0, 0, 0};
            node->direct = {1,1,1,1};
            node->update_direct();
            node->matrix = matrix;
            node->g = g + 1;
            node->parent_index = index;
            node->index = open.size();
            node->update_h();
            node->open_state = OPEN;
            if (i == 0)
            {
                swap(node->matrix[pos.first][pos.second], node->matrix[pos.first - 1][pos.second]);
                node->pos.first--;
                node->used_direct[1] = true;
            }
            if (i == 1)
            {
                swap(node->matrix[pos.first][pos.second], node->matrix[pos.first + 1][pos.second]);
                node->pos.first++;
                node->used_direct[0] = true;
            }
            if (i == 2)
            {
                swap(node->matrix[pos.first][pos.second], node->matrix[pos.first][pos.second - 1]);
                node->pos.second--;
                node->used_direct[3] = true;
            }
            if (i == 3)
            {
                swap(node->matrix[pos.first][pos.second], node->matrix[pos.first][pos.second + 1]);
                node->pos.second++;
                node->used_direct[2] = true;
            }
            if(node->exit_node(open))continue;
            open.emplace_back(node);
        }
    }
}
