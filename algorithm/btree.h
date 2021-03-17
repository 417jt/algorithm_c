#ifndef BTREE_H_INCLUDED
#define BTREE_H_INCLUDED





#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef char datatype_bt;
typedef struct btreenode{
    datatype_bt data;
    struct btreenode *lchild, *rchild;
}btreenode,*btree_pnode;

extern btee_pnode create_btree1(void);
extern void create_btree(btree_pnode *T);
extern void pre_order(btree_pnode t);
extern void unpre_order(btree_pnode t);
extern void mid_order(btree_pnode t);
extern void post_order(btree_pnode t);
extern void level_order(btree_pnode t);
extern void travel(char const *str, void (*pfun) (btree_pnode),btree_pnode T);

#endif // BTREE_H_INCLUDED
