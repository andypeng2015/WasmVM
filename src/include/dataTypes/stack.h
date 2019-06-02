#ifndef WASMVM_DATATYPES_STACK_DEF
#define WASMVM_DATATYPES_STACK_DEF

typedef struct stackNode_ {
    void* data;
    struct stackNode_* next;
} stackNode;

typedef struct stack_ {
    stackNode* head;
    unsigned int size;
    void (*freeElem)(void* elem);
    void (*push)(struct stack_* thisStack, void* data);
    // If success return 0, or return -1
    int (*pop)(struct stack_* thisStack, void** dataPtr);
    int (*top)(struct stack_* thisStack, void** dataPtr);
} stack;

stack* new_stack(void (*freeElem)(void* elem));
void free_stack(stack* thisstackPtr);

#endif
