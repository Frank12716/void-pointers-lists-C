#ifndef __QUEUE_H
#define __QUEUE_H

#include "single_ref_list.h"

typedef SingleRefNode * Queue;

Queue queueNew();

void queuePush(Queue *, void *);

void * queuePop(Queue *);

#endif