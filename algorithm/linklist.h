#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

typedef struct node{
    datatype data;
    struct node *next;
} listnode, *linklist;



extern linklist list_create();  //单链表的创建
extern linklist list_create2(); //单链表的创建(功能同上)
extern int list_head_insert(linklist H,datatype value);  //新建数据节点并且插入到头结点的后面
extern int list_insert(linklist H,int pos,datatype value);  //新建数据节点按照指定位置（pos）插入到链表中
extern int list_delete(linklist H,int pos);     //删除链表中指定位置的节点
extern linklist list_get(linklist H,int pos);   //获取链表中指定位置的节点
extern linklist list_locate(linklist H,datatype value);   //获取链表中数据等于value的第一个节点
extern void list_reverse(linklist H);   //链表倒置(逆序)
extern void list_show(linklist H);    //链表节点数据显示（遍历）
extern int list_order_insert(linklist H,datatype value);   //单链表的有序插入（从小到大排列）
extern void list_sort(linklist H);    //单链表重新排序（从小到大排序）
extern void list_free(linklist H);   //释放单链表



#endif // LINKLIST_H_INCLUDED
