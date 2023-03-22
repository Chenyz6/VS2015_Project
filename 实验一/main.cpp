#include "astar_algorithm.h"
#include <iostream>
#include <cstring>
#include "NXN.h"

using namespace std;

int main()
{
    vector<Node*> open;
    Node *node;
	node = new Node_nn(
	{ { 2, 1, 3, 9},
	 { 8, 4, 5, 0},
	 {7,6,10, 11},
	 {12,15,14,13},
	}
	);
	//node = new Node_nn(
	//{ { 7, 3, 1},
	//{ 8, 4 , 6 },
	//{ 5, 0, 2 },
	//}
	//);
    
    node->update_h();
    open.emplace_back(node);
    while (node->h!=0)          //成功结束条件：h为0
    {
        node->run(open);
        if ((node=get_optimal_node(open)) == NULL)  //失败结束条件：open表为空
        {
            cout << "无解" << endl;
            return 0;
        }
    }
    node->print(open);              //打印最优解
    std::cin.get();

    return 0;
}
