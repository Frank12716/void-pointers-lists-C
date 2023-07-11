#ifndef __SINGLE_REF_LIST
#define __SINGLE_REF_LIST

typedef struct SingleRefNode {
    void * _data_ptr;
    struct SingleRefNode * _next_list_ptr;
} SingleRefNode;

SingleRefNode * _newSingleRefNode(void *, SingleRefNode *);

SingleRefNode * _newSingleRefNodeAlone(void *);

SingleRefNode * _newSingleRefNodeEmpty();

void * _deleteSingleRefNode(SingleRefNode *);

SingleRefNode * _emptyList();

SingleRefNode * _newSelfSingleRefNode(void *);

void * nullData();

#endif
