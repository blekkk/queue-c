#include "queue.h"
#include <stdlib.h>

int main() 
{
	queue queue_arr;
	init(&queue_arr);
	int choice,val;
	
	while (1)
	{
		printf("========================================\n");
		printf("The Queue: "); displayQ(&queue_arr);
		if (isFull(&queue_arr) == 1)
			printf("Queue has reached it's maximum limit!\n");
		else if	(isEmpty(&queue_arr) == 1)
			printf("Please Enqueue\n");
		printf("========================================\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Exit\n");
		printf("========================================\n");
		printf("Enter your choice: ");scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Insert the value: ");scanf("%d",&val);
				enqueue(&queue_arr,val);
				break;
			case 2:
				dequeue(&queue_arr);
				break;
			case 3:
				exit(0);
			default:
				printf("Wrong input!");
		}
		system("cls");
	}
	
	return 0;
}
