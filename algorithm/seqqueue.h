#ifndef _SEQQUEUE_H_
#define _SEQQUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 10

typedef int datatype;
typedef struct seqqueue{
    datatype data[MAXSIZE];
    int front, rear;
} seq_queue, *seq_pqueue;




extern seq_pqueue init1_seqqueue();    //创建队列
extern void init_seqqueue(seq_pqueue *Q);    //创建队列（同上）
extern bool is_full_seqqueue(seq_pqueue q);   //判断队列是否为满队列
extern bool is_empty_seqqueue(seq_pqueue q);    //判断队列是否为空队列
extern bool in_seqqueue(datatype data,seq_pqueue q);    //入队
extern bool out_seqqueue(seq_pqueue q,datatype *D);   //出队
extern void show_seqqueue(seq_pqueue q);    //从队头到队尾依次显示队列中的数据
extern void free_seqqueue(seq_pqueue q);  //释放队列

#endif // _SEQQUEUE_H_
