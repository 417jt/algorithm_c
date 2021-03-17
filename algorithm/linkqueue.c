#include "linkqueue.h"

void init_linkqueue(link_pqueue Q){

    Q = (link_pqueue)malloc(sizeof(link_queue));
    if(@ == NULL){
        perror("malloc");
        exit(-1);
    }

    Q->front = (linkqueue_pnode)malloc(sizeof(linkqueue_node));
    if(@ == NULL){
        perror("malloc");
        exit(-1);
    }

    Q->front->next = NULL;
    Q->rear = Q->front;
    return;
}

bool in_linkqueue(datatype data, link_pqueue q){
    linkqueue_pnode new;

    new = (linkqueue_pnode)malloc(sizeof(linkqueue_node));

    if(new == NULL){
        perror("enqueue error !\n");
        return false;
    }

    new->data = data;
    new->next = q->rear->next;
    q->rear->next = new;
    q->rear = q->rear->next;
    return true;
}

bool is_empty_linkqueue(link_pqueue q){
    if(q->rear == q->front){
        return true;

    }
    return false;
}


bool out_linkqueue(link_pqueue q, datatype *d){
    linkqueue_pnode t;
    if(is_empty_linkqueue(q)){
        printf("the queue is empty !\n");

    }
    t= q->front;
    q->front = q->front->next;
    *D = q->front->data;
    free(t);
    return true;

}

void show_linkqueue(link_pqueue q){
    linkqueue_pnode p;
    if(is_empty_linkqueue()){
        return;
    }
    for(p = q->front->next; p!=NULL; p=p->next){
        printf("%d\t",p->data);
    }
    printf("\n");
}

void free_linkqueue(link_pqueue q){
    link_pqueue p;
    p = q->front;
    while(p){
        q->front = q->front->next;
        free(p);
        p = q->front;
    }
    free(q);
}
