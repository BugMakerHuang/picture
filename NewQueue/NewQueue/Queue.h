#ifndef QUEUE_H
#define QUEUE_H

class Queue{
   public:
	   Queue(int size);									//创建队列
	   ~Queue();										//销毁队列
	   bool InsertQueue(int num);						//入队                                    
	   bool DeleteQueue(int &node);						//出队
	   void QueueTraverse();							//遍历
	   int QueueSize();									//队列宽度
	   bool isEmptyQueue();								//判断是否为空队列
	   bool isFullQueue();								//判断是否为满队列
   private:
	   int* m_pList;                                    //队列空间
	   int  m_iQHead;                                   //队头
	   int  m_iQTail;                                   //队尾
	   int  m_iQueueSize;                               //队列容量
	   int  m_iLength;                                  //队列元素指针
};
#endif // !QUEUE_H
