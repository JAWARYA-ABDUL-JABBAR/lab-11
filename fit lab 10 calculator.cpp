#include<stdio.h>
int main()
{
	int a, b, choice;
	printf("enter your choice\n");
	printf("1. addition\n2. subraction\n3. multiplication\n4. division\n");
	scanf("%d", &choice);
	
	if(choice>4)
	{
		printf("select with in the range!\n");
	}
	else
	{
		printf("enter 2 integer numbers\n");
		scanf("%d %d", &a, &b);
	}
	
	switch(choice)
	{
		case 1:printf("%d + %d = %d \n", a, b, (a+b));
		
			break;
			case 2:printf("%d - %d = %d \n", a, b, (a-b));
		
			break;
			case 3:printf("%d * %d = %d \n", a, b, (a*b));
		
			break;
			case 4:if (b!=0)
			printf("%d / %d = %d \n", a, b, (a/b));
			else
			printf("number can't be divide by 0\n");
		
			break;
			default: printf("you entered wrong choice\n");
			break;
			
		}
		
	}

