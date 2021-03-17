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




extern seq_pqueue init1_seqqueue();    //��������
extern void init_seqqueue(seq_pqueue *Q);    //�������У�ͬ�ϣ�
extern bool is_full_seqqueue(seq_pqueue q);   //�ж϶����Ƿ�Ϊ������
extern bool is_empty_seqqueue(seq_pqueue q);    //�ж϶����Ƿ�Ϊ�ն���
extern bool in_seqqueue(datatype data,seq_pqueue q);    //���
extern bool out_seqqueue(seq_pqueue q,datatype *D);   //����
extern void show_seqqueue(seq_pqueue q);    //�Ӷ�ͷ����β������ʾ�����е�����
extern void free_seqqueue(seq_pqueue q);  //�ͷŶ���

#endif // _SEQQUEUE_H_
