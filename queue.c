#include "queue.h"

Queue queueNew() {
    return _emptyList();
}

void queuePush(Queue * queue_ptr, void * data) {
    if (*queue_ptr == _emptyList()) {
        *queue_ptr = _newSelfSingleRefNode(data);
    } else {
        (*queue_ptr)->_next_list_ptr = _newSingleRefNode(data, (*queue_ptr)->_next_list_ptr);
        *queue_ptr = (*queue_ptr)->_next_list_ptr;
    }
}

void * queuePop(Queue * queue_ptr) {
    if (*queue_ptr == _emptyList()) return nullData();
    void * data_ptr;
    if (*queue_ptr == (*queue_ptr)->_next_list_ptr) {
        data_ptr = _deleteSingleRefNode(*queue_ptr);
        *queue_ptr = _emptyList();
    } else {
        SingleRefNode * temp = (*queue_ptr)->_next_list_ptr;
        (*queue_ptr)->_next_list_ptr = temp->_next_list_ptr;
        data_ptr = _deleteSingleRefNode(temp);
    }
    return data_ptr;
}