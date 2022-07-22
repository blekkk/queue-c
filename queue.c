#include "queue.h"

void init(queue *Q)
{
	Q->front = -1;
	Q->rear = -1;
}

int isFull(queue *Q)
{
	if (Q->rear == MAX - 1)
		return 1;
	else
		return 0;
}

int isEmpty(queue *Q)
{
	if (Q->front == -1 || Q->front > Q->rear)
		return 1;
	else
		return 0;
}

void enqueue(queue *Q, int val)
{
	if (isFull(Q) != 1)
	{
		if(Q->front == -1)
			Q->front = 0;
		Q->rear++;
		Q->Arr[Q->rear] = val;
	}
	else
		printf("Overflow!");
}

void dequeue(queue *Q)
{
	int temp;
	if (isEmpty(Q) != 1)
	{
		for (temp = 1; temp <= Q->rear; temp++)
			Q->Arr[temp - 1] = Q->Arr[temp];
		Q->Arr[Q->rear] = NULL;
		Q->rear--;
	}
	else
		printf("Underflow!");
}

void displayQ(queue *Q)
{
	int i;
	if(Q->front == -1)
		printf("The queue is empty! ");
	else
	{
		for(i = Q->front; i <= Q->rear; i++)
			printf("%d ",Q->Arr[i]);
		printf("\n");
	}
}
