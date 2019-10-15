#include"Queue.h"
#include<iostream>
using namespace std;
int main()
{
	Queue* pLIST = new Queue(3);
	int c1 = 3;
	int c2 = 4;
	int c3 = 5;
	int c4;
	int c5 = 6;
	pLIST->InsertQueue(c1);
	pLIST->InsertQueue(c2);
	pLIST->InsertQueue(c3);
	//pLIST->InsertQueue(6);
	pLIST->DeleteQueue(c4);
	cout<<"temp" << c4 << endl;
	pLIST->InsertQueue(c5);
	pLIST->QueueTraverse();
	delete pLIST;
	pLIST = NULL;
	system("pause");
	return 0;
}