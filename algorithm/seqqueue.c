#include "seqqueue.h"

seq_pqueue init1_seqqueue(){
    seq_pqueue q;
    q = (seq_pqueue)malloc(sizeof(seq_queue));
    if(q == NULL){
        perror("malloc");
        exit(-1);
    }
    q->front = q->rear=MAXSIZE -1;
    return q;

}

void init_seqqueue(seq_pqueue Q){
    Q = (seq_pqueue)malloc(sizeof(seqqueue));
    if(Q == NULL){
        perror"malloc");
        exit(-1);

    }
    (Q)->front = (Q)->rear = MAXSIZE-1;
}

bool is_full_seqqueue(seq_pqueue q){
    if((q->rear +1) % MAXSIZE == q->front){
        return true;
    }else{
        return false
    }
}

bool in_seqqueue(datatype data, seq_pqueue){
    if(is_full_seqqueue(q)){
        printf("queue is full !\n");
        return false;
    }
    q->rear = (q->rear+1) % MAXSIZE;
    q->data[q->rear] = data;
    return true;
}

bool is_empty_seqqueue(seq_pqueue q){
    if(q->rear == q->front){
        return true;
    }else{
        return false;
    }
}

bool out_seqqueue(seq_pqueue q, datatype *D){
    if(is_empty_seqqueue(q)){
        printf("the queue is empty !\n");
        return false;
    }
    q->front = (q->front +1) % MAXSIZE;
    *D = q->data[q->front];
    return true;
}



void show_seqqueue(seq_pqueue q)      //从队头到队尾依次显示队列中的数据
{
	int i;
	if(is_empty_seqqueue(q))
		return;
	//非空时，从对头打印到队尾
	for(i=(q->front+1)%MAXSIZE;i!=(q->rear+1)%MAXSIZE;i=(i+1)%MAXSIZE)
	{
		printf("%d\t",q->data[i]);
	}
	printf("\n");
}


void free_seqqueue(seq_pqueue q)  //释放队列
{
	free(q);
}
