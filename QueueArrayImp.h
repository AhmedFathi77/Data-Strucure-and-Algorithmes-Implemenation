#ifndef QUEUEARRAYIMP_H_INCLUDED
#define QUEUEARRAYIMP_H_INCLUDED
#define MAXQUEUE 10
typedef int QueueEntry;
typedef struct queue_sk{
    int Front;
    int Rear;
    int Size;
    QueueEntry entry[MAXQUEUE];
}Queue;
void CreatQueue(Queue *pq);
void Append(QueueEntry e,Queue *pq);
void Serve(QueueEntry *pe,Queue *pq);
int QueueEmpty(Queue *pq);
int FullQueue(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraveseQueue(Queue *pq , void(*pf)(QueueEntry));
#include"QueueArrayImp.c"
#endif // QUEUEARRAYIMP_H_INCLUDED
