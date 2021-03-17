#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

typedef struct node{
    datatype data;
    struct node *next;
} listnode, *linklist;



extern linklist list_create();  //������Ĵ���
extern linklist list_create2(); //������Ĵ���(����ͬ��)
extern int list_head_insert(linklist H,datatype value);  //�½����ݽڵ㲢�Ҳ��뵽ͷ���ĺ���
extern int list_insert(linklist H,int pos,datatype value);  //�½����ݽڵ㰴��ָ��λ�ã�pos�����뵽������
extern int list_delete(linklist H,int pos);     //ɾ��������ָ��λ�õĽڵ�
extern linklist list_get(linklist H,int pos);   //��ȡ������ָ��λ�õĽڵ�
extern linklist list_locate(linklist H,datatype value);   //��ȡ���������ݵ���value�ĵ�һ���ڵ�
extern void list_reverse(linklist H);   //������(����)
extern void list_show(linklist H);    //����ڵ�������ʾ��������
extern int list_order_insert(linklist H,datatype value);   //�������������루��С�������У�
extern void list_sort(linklist H);    //�������������򣨴�С��������
extern void list_free(linklist H);   //�ͷŵ�����



#endif // LINKLIST_H_INCLUDED
