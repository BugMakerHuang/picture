#include"Queue.h"
#include<iostream>
using namespace std;
//Create a Queue
Queue::Queue(int size) {
	//初始化成员
	m_iQHead = 0;
	m_iQTail = 0;
	m_iQueueSize = size;
	m_iLength = 0;
	//创建队列数组
	m_pList = new int[m_iQueueSize];

}
//Destroy Queue
Queue::~Queue() {
	delete[]m_pList;
	m_pList = NULL;
}

//Queue Length
int Queue::QueueSize() {
	return m_iQueueSize;
}
//judge isempty or not
bool Queue::isEmptyQueue() {
	if (m_iQueueSize == 0) {
		return true;
	}
	else
	{
		return false;
	}

}
//judge isFull or not
bool Queue::isFullQueue() {
	if (m_iLength == m_iQueueSize) {
		return true;
	}
	else
	{
		return false;
	}
}
//Insert a number from Queue
bool Queue::InsertQueue(int num) {
	//判断队列是否为满
	if (isFullQueue()) 
	{
		return false;
	}
	else
	{
	//插入元素
		m_pList[m_iQTail] = num;
		m_iQTail++;
		m_iQTail = m_iQTail % m_iQueueSize;
		m_iLength++;
		return true;
	}

}
//Delete a number from Queue
bool Queue::DeleteQueue(int& node)
{
	//判断队列是否为空
	if(isEmptyQueue())
	{
		return false;
	}
	else 
	{
	//删除元素
		node = m_pList[m_iQHead];
		m_iQHead++;
		m_iQHead = m_iQHead % m_iQueueSize;
		m_iLength--;
		return true;
	}

}

void Queue::QueueTraverse() 
{
	for(int i=m_iQHead;i<m_iLength+m_iQHead;i++)
	{
		cout<<m_pList[i%m_iQueueSize]<<endl;
	}
}