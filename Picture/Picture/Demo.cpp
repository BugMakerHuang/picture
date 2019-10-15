/*
 Í¼µÄ±éÀúºÍ´æ´¢
*/
/*
       A
     /   \
    B     D
   / \   / \
  C   F G - H
   \ /
    E
*/

/*
   A  B  C  D  E  F  G  H
 A 0  1  0  1  0  0  0  0
 B 1  0  1  0  0  1  0  0  
 C 0  1  0  0  1  0  0  0
 D 1  0  0  0  0  0  1  1
 E 0  0  1  0  0  1  0  0
 F 0  1  0  0  1  0  0  0
 G 0  0  0  1  0  0  0  1
 H 0  0  0  1  0  0  1  0	
*/
#include"CMap.h"

int main() {
	CMap* pMap = new  CMap(8);
	Node* pNodeA = new Node('A');
	Node* pNodeB = new Node('B');
	Node* pNodeC = new Node('C');
	Node* pNodeD = new Node('D');
	Node* pNodeE = new Node('E');
	Node* pNodeF = new Node('F');
	Node* pNodeG = new Node('G');
	Node* pNodeH = new Node('H');
	pMap->addNode(pNodeA);
	pMap->addNode(pNodeB);
	pMap->addNode(pNodeC);
	pMap->addNode(pNodeD);
	pMap->addNode(pNodeE);
	pMap->addNode(pNodeF);
	pMap->addNode(pNodeG);
	pMap->addNode(pNodeH);
	pMap->setValueToMatrixForDirectedGraph(0, 1);   //AB
	pMap->setValueToMatrixForDirectedGraph(0, 3);   //AD
	pMap->setValueToMatrixForDirectedGraph(1, 2);   //BC
	pMap->setValueToMatrixForDirectedGraph(1, 5);   //BF
	pMap->setValueToMatrixForDirectedGraph(3, 6);   //DG	
	pMap->setValueToMatrixForDirectedGraph(3, 7);   //DH
	pMap->setValueToMatrixForDirectedGraph(6, 7);   //GH
	pMap->setValueToMatrixForDirectedGraph(2, 4);   //CE
	pMap->setValueToMatrixForDirectedGraph(4, 5);   //EF   
	pMap->printMatrix();
	pMap->depthFirstTraverse(0);
	//pMap->breadthFirstTraverse(0);
	delete pMap;
	pMap = NULL; 
	system("pause");
	return 0;
}