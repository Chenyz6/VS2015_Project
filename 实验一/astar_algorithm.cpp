#include "astar_algorithm.h"

using namespace std;

Node* Node::exit_node(vector<Node *> &nodes)
{
    for (int i = 0; i < nodes.size(); i++)
        if ((*this) == (*nodes[i]))
            return nodes[i];
    return NULL;
}

void Node::run(vector<Node *> &open)
{
    run_(open);
    // Node *node = find(open);
    Node *node = exit_node(open);
    if (node != NULL)node->open_state = CLOSE;
}

void Node::print(vector<Node *> &open)
{
    stack<Node *> s;
    auto node = this;
    while (node->index != 0)
    {
        s.push(node);
        node = open[node->parent_index];
    }
    s.push(node);

    for (int i = 0; !s.empty(); i++)
    {
        cout << "procedure:" << i << endl; //暂不考虑int溢出
        node=s.top();
        print_one_node(*node);
        cout << "***********************************" << endl;
        s.pop();
    }
}

Node *get_optimal_node(vector<Node *> &nodes)
{
    size_t minum = -1;
    size_t minum_index = nodes.size();
    size_t f;
    for (int i = 0; i < nodes.size(); i++)
    {
        if (nodes[i]->open_state == CLOSE)
            continue;
        f = nodes[i]->g + nodes[i]->h;
        if (f < minum)
        {
            minum = f;
            minum_index = i;
        }
    }
    if (minum_index == nodes.size())
        return NULL;
    return nodes[minum_index];
}
