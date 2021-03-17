#ifndef LINKQUEUE_H_INCLUDED
#define LINKQUEUE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int datatype;

typedef struct linkqueuenode{
    datatype data;

    struct linkqueuenode *next;
} linkqueue_node, *linkqueue_pnode;

typedef struct linkqueue{
    linkqueue_pnode front, rear;
}link_queue, *link_pqueue;

extern void init_linkqueue(link_pqueue *Q);          //��������
extern bool is_empty_linkqueue(link_pqueue q);            //�ж϶����Ƿ�Ϊ��
extern bool in_linkqueue(datatype data,link_pqueue q);      //���
extern bool out_linkqueue(link_pqueue q,datatype *D);     //����
extern void show_linkqueue(link_pqueue q);            //������ʾ��ͷ����β������
extern void free_linkqueue(link_pqueue q);           //�ͷŶ���

