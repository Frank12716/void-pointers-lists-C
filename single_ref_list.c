#include "single_ref_list.h"

#include <stdlib.h>

SingleRefNode * _emptyList() {
    return NULL;
}

SingleRefNode * _newSingleRefNode(void * data_ptr, SingleRefNode * next_list_ptr) {
    SingleRefNode * new_node = (SingleRefNode *)malloc(sizeof(SingleRefNode));
    new_node->_next_list_ptr = next_list_ptr;
    new_node->_data_ptr = data_ptr;
    return new_node;
}

SingleRefNode * _newSelfSingleRefNode(void * data_ptr) {
    SingleRefNode * new_node = (SingleRefNode *)malloc(sizeof(SingleRefNode));
    new_node->_next_list_ptr = new_node;
    new_node->_data_ptr = data_ptr;
    return new_node;
}


SingleRefNode * _newSingleRefNodeAlone(void * data_ptr) {
    return _newSingleRefNode(data_ptr, NULL);
}

SingleRefNode * _newSingleRefNodeEmpty() {
    return _newSingleRefNode(NULL, NULL);
}

void *  _deleteSingleRefNode(SingleRefNode * node_ptr) {
    void * temp = node_ptr->_data_ptr;
    free(node_ptr);
    return temp;
}

void * nullData() {
    return NULL;
}