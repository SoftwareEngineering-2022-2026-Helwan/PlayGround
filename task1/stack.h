#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAXSIZE 10

#define StackEntity int

typedef struct 
{
	int top;
	StackEntity entity[MAXSIZE];
} Stack;

#include "./stack.c"
void createStack(Stack *stack);
int push(Stack *stack, StackEntity item);
int pop(Stack *stack);
int stackFull(Stack *stack);
int stackEmpty(Stack *stack);
void topStack(Stack *stack, StackEntity *entity);
int stackLength(Stack *stack);
void traversStack(Stack *stack, void (*function) (StackEntity) );

#endif
