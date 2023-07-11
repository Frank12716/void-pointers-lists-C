#ifndef __STACK_H
#define __STACK_H

#include "single_ref_list.h"

typedef SingleRefNode * Stack;

Stack stackNew();

void stackPush(Stack *, void *);

void * stackPop(Stack * head_ptr);

#endif