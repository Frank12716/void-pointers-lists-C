#include "stack.h"


Stack stackNew() {
    return _emptyList();
}

void stackPush(Stack * stack_ptr, void * data_ptr) {
    SingleRefNode * temp = *stack_ptr;
    *stack_ptr = _newSingleRefNode(data_ptr, temp);
}

void * stackPop(Stack * stack_ptr) {
    if (*stack_ptr == _emptyList()) return nullData();
    SingleRefNode * temp = *stack_ptr;
    *stack_ptr = (*stack_ptr)->_next_list_ptr;
    return _deleteSingleRefNode(temp);
}