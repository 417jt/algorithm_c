#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include "linklist.c"

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";


void main()
{
    linklist H = list_create2();
    list_show(H);
    reorderList2(H);
   list_show(H);

}

int getline(char s[], int lim){
    int c,i;
    i = 0;
    while(--lim >0 && (c = getchar()) != EOF && c != '\n'){
        s[i++] = c;
    }
    if(c == '\n'){
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int strindex(char s[], char t[]){
    int i,j,k;
    for(i = 0; s[i] != '\0'; i++){
        for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
        if(k >0 && t[k]== '\0'){
            return i;
        }
    }
    return -1;
}

void printd(int n){
    if(n < 0){
        putchar('-');
        n = -n;
    }
    if(n /  10){
        printd(n / 10);
    }
    putchar(n % 10 + '0');
}

/**  大数相加
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 * 计算两个数之和
 * @param s string字符串 表示第一个整数
 * @param t string字符串 表示第二个整数
 * @return string字符串
 */
char* nc_1(char* s, char* t ) {
    // write code here
    int slen = strlen(s);
    int tlen = strlen(t);
    int nlen = fmax(slen, tlen) + 1;
    char *arr = (char *)calloc(nlen + 1, sizeof(char));
    int carry = 0;
    int sum = 0;
    for(int i = nlen - 1, j = slen - 1, k = tlen - 1;i >= 0; i--){
        int sint = 0;
        int tint = 0;
        if(j >=0){
            sint = s[j--] - '0';
        }
        if(k >= 0){
            tint = t[k--] - '0';
        }
        sum =  sint + tint + carry;
        carry = sum / 10;
        arr[i] = sum % 10 + '0';
    }
    if (*arr == '0') {
        return ++arr;
    }
    return arr;
}

/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 *对于给定的单链表{10,20,30,40}，将其重新排序为{10,40,20,30}
 *       重排链表
 * @param head ListNode类
 * @return  void
 */


void reorderList(struct ListNode* head ) {
    // write code here
    struct ListNode *temp = head;
    struct ListNode *sam = head;
    struct ListNode *last = head;
    while(sam != NULL && sam->next != NULL && sam->next->next != NULL){
        while((temp->next) != NULL){
            temp = temp ->next;
            if((temp->next) != NULL){
                last = last->next;
            }

        }
        last->next =NULL;
        temp -> next = sam -> next;
        sam -> next = temp;
        sam = temp->next;
        last = temp ->next;
        temp = temp ->next;

    }

}

void reorderList(struct ListNode* head ) {
    // write code here
    if(head == NULL || head->next == NULL) return;
    struct ListNode *fast = head;
    struct ListNode *slow = head;

    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    struct ListNode *reve = slow->next;
    slow->next = NULL;
    reverse_link(reve);
    head = merge_link(head,reve);


    struct ListNode *last = head;
    while(sam != NULL && sam->next != NULL && sam->next->next != NULL){
        while((temp->next) != NULL){
            temp = temp ->next;
            if((temp->next) != NULL){
                last = last->next;
            }

        }
        last->next =NULL;
        temp -> next = sam -> next;
        sam -> next = temp;
        sam = temp->next;
        last = temp ->next;
        temp = temp ->next;

    }

}


/**
 * 反转链表
 *
 */
void reverse_link(struct ListNode* head ) {
    // write code here
    if(head == NULL || head->next == NULL) return;
    struct ListNode *temp = head-next;
    struct ListNode *q = head->next;
    head ->next = NULL;
    while(temp){
        q=temp->next;
        temp ->next=head;
        head = temp;
        temp =q;
    }
}

/**
 * 合并链表
 *
 */
ListNode* void merge_link(struct ListNode* h1, struct ListNode* h2, ) {
    // write code here
    if(head == NULL && head->next == NULL) return NULL;
    if(!h1){
        return h2;
    }
    struct ListNode *H = h1;
    struct ListNode *temp = H;
    h1 = h1->next;
    while(h1 || h2){
        if(h2){
            temp ->next = h2;
            h2= h2->next;
            temp = temp ->next;
        }
        if(h1){
            temp ->next = h1;
            h1= h1->next;
            temp = temp ->next;
        }
    }
    return H;
}


