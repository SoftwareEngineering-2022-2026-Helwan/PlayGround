#include<stdbool.h>
#include "stack.h"

void createStack(Stack *stack)
{
	stack->top = 0;
}

int stackEmpty(Stack *stack)
{
	if(stack->top == 0)
	{
		return 1;
	}
	return 0;
}

int stackFull(Stack *stack)
{
	if(stack->top == MAXSIZE)
	{
		return 1;
	}
	return 0;
}

int push(Stack *stack, StackEntity item)
{
	if(!stackFull(stack))
	{
		stack->entity[stack->top] = item;
		stack->top++;
		return 1;
	}

	return -1;

} 

int pop(Stack *stack)
{
	if(!stackEmpty(stack))
	{
		stack->top--;
		return 1;
	}
	return -1;
}

void topStack(Stack *stack , StackEntity *entity)
{
	(*entity) = stack->entity[stack->top];
}

int stackLength(Stack *stack)
{
	return stack->top;
}

void traversStack(Stack *stack, void (*function) (StackEntity entity) )
{
	for(int item = 0; item < stack->top; item++)
	{
		(*function) (stack->entity[item]);
	}
}

