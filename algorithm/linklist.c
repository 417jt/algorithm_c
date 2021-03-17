#include "linklist.h"

linklist list_create(){
    linklist H;
    if((H=(linklist)malloc(sizeof(listnode)))==NULL){
        printf("malloc failed !\n");
        return H;
    }
    H->data = 0;
    H->next=NULL;
    return H;
}

linklist list_create2(){
    linklist H,r,p;
    int value;
    if((H=(linklist)malloc(sizeof(listnode)))==NULL){
        printf("malloc failed !\n");
        return H;
    }
    H->data = 0;
    H->next=NULL;
    r = H;
    while(1){
        printf("input a number ( -1 exit) ;");
        scanf("%d", &value);
        if(value == -1){
            break;
        }
        if((p=(linklist)malloc(sizeof(listnode)))==NULL){
        printf("malloc failed !\n");
        return H;
    }
    p->data = value;
    p->next=NULL;

    r->next = p;
    r = p;
    }

    return H;
}

int list_head__insert(linklist H, datatype value){
    linklist p;
    if((p=(linklist)malloc(sizeof(listnode)))==NULL){
        printf("malloc failed !\n");
        return -1;
    }
    p->data=value;
    p->next=H->next;
    H->next=p;
    return 0;
}

int list_insert(linklist H, int pos, datatype value){
    linklist p,q;
    if(pos == 0){
        p = H;
    }else{
        p = list_get(H, pos -1);
    }
    if(p == NULL){
       printf("para is invalid !\n") ;
       return -1;
    }else{
        if((q = (linklist)malloc(sizeof(listnode))) ==NULL){
            printf("malloc failed !\n");
            return -1;
        }
    }
    q->data = value;
    q->next = p->next;
    p->next = q;
    return 0;
}

int list_delete(linklist H, int pos){
    linklist p,q;
    if(pos == 0){
        p = H;
    }else {
        p = list_get(H, pos -1);
    }
    if(p == NULL || p->next == NULL){
        printf("para is invalid !\n");
        return -1;
    }else{
        q = p->next;
        p->next = q->next;
        free(q);
        q = NULL;
        return 0;
    }

}

linklist list_get(linklist H, int pos){
    linklist p = H;
    int i = -1;
    if(pos <0){
        printf("position is invalid : < 0 \n");
        return NULL;
    }

    while(p->next && i < pos){
        p = p->next;
        i++;
    }
    if(i == pos){
        return p;
    }else{
        printf("position is invalid : >length \n");
        return NULL;
    }
}

linklist list_locate(linklist H,datatype value)     //获取链表中数据等于value的第一个节点
{
	linklist p=H->next;
	while(p&&p->data !=value)
	{
		p=p->next;
	}

	return p;
}

void list_reverse(linklist H){
    linklist p,q;
    p = H->next;
    H->next=NULL;
    while(p){
        q = p;
        p = p->next;
        q->next = H->next;
        H->next = q;
    }
}

int list_order_insert(linklist H, datatype value){
    linklist p,q;
    if((p=(linklist)malloc(sizeof(listnode))) == NULL){
        printf("malloc failed !\n");
        return -1;
    }
    p->data = value;
    q = H;
    while(q->next && q->next->data < value){
        q = q->next;
    }
    p->next = q->next;
    q->next = p;
    return 0;
}

void list_show(linklist H){
    while(H->next){
        printf("%d ", H->next->data);
        H = H->next;
    }
    printf("\n");
}

void list_free(linklist H)   //释放单链表
{
	linklist p,q;
	p = H->next;
	while(p)
	{
		q = p->next;
		free(p);
		p = q;
	}
	free(H);
}


void list_sort(linklist H)    //单链表重新排序（从小到大排序）
{
	linklist p,q,r;

	p=H->next;
	H->next = NULL;

	while(p)
	{
		q=p;
		p=p->next;
		r=H;
		printf(r->data);
		while(r->next && r->next->data < q->data)
			r=r->next;

		q->next = r->next;
		r->next = q;
	}
}




