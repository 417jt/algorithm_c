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

extern void init_linkqueue(link_pqueue *Q);          //创建队列
extern bool is_empty_linkqueue(link_pqueue q);            //判断队列是否为空
extern bool in_linkqueue(datatype data,link_pqueue q);      //入队
extern bool out_linkqueue(link_pqueue q,datatype *D);     //出队
extern void show_linkqueue(link_pqueue q);            //依次显示队头到队尾的数据
extern void free_linkqueue(link_pqueue q);           //释放队列

