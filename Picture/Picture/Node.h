#ifndef NODE_H
#define NODE_H
class Node {
    public:
		Node(char data = 0);      //当前Data的值
		char m_cData;             
		bool m_bIsVisited;       //标识当前节点有没有被访问

};
#endif // NODE_H
