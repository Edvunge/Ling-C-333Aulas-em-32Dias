#include <stdio.h>
#include <stdlib.h>

// structs
struct stack {
    struct node *top;
    int size;
};

struct node {
    int data;
    struct node *next;
};

// function declarations
int  push(int, struct stack*);
int  pop(struct stack*);
void destroy(struct stack*);


int main(void) {
    int result = EXIT_SUCCESS;
    size_t i;

    // allocate memory for a struct and record its pointer
    struct stack *stack = malloc(sizeof *stack);
    if (NULL == stack) {
        perror("malloc() failed");
        return EXIT_FAILURE;
    }

    // initialize stack
    stack->top = NULL;
    stack->size = 0;

    // push 10 ints
     {
        int data = 0;
        for (i = 0; i < 10; i++) {
            printf("Pushing: %d\n", data);
            if (-1 == push(data, stack)) {
                perror("push() failed");
                result = EXIT_FAILURE;
                break;
            }
            ++data;
        }
     }

     if (EXIT_SUCCESS == result) {
        // pop 5 ints
        for (i = 0; i < 5; i++) {
            printf("Propped: %i\n", pop(stack));
        }
     }

     destroy(stack);
    return result;
}

int push(int data, struct stack *stack) {
    int result = 0;

    // allocate memory for new node
    struct node *new_node = malloc(sizeof *new_node);
    if (NULL == new_node) {
        result = -1;
    } else {
        new_node->data = data;
        new_node->next = stack->top;
        stack->top = new_node;
        stack->size++;
    }
    return result;
}

// pop a value off of the stack
// returns the value popped off the stack
int pop(struct stack *stack) {
    
    struct node *top = stack->top;
    int data = top->data;
    
    stack->top = top->next;
    stack->size--;
    
    free(top);
    return data;
}


// destroy the stack
void destroy(struct stack *stack) {
    while(stack->top != NULL) {
        pop(stack);
    }
}
