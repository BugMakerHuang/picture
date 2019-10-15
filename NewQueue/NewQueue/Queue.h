#ifndef QUEUE_H
#define QUEUE_H

class Queue{
   public:
	   Queue(int size);									//��������
	   ~Queue();										//���ٶ���
	   bool InsertQueue(int num);						//���                                    
	   bool DeleteQueue(int &node);						//����
	   void QueueTraverse();							//����
	   int QueueSize();									//���п��
	   bool isEmptyQueue();								//�ж��Ƿ�Ϊ�ն���
	   bool isFullQueue();								//�ж��Ƿ�Ϊ������
   private:
	   int* m_pList;                                    //���пռ�
	   int  m_iQHead;                                   //��ͷ
	   int  m_iQTail;                                   //��β
	   int  m_iQueueSize;                               //��������
	   int  m_iLength;                                  //����Ԫ��ָ��
};
#endif // !QUEUE_H
