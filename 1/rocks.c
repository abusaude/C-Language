#include <stdio.h>

int main()
{
	char ex[20];
	char test[] = "hello";
	int d;
	puts("Enter your name");
	scanf("%19s",ex);
	puts("Enter your age");
	
	scanf("%i",&d);
	
	d++;
	printf("\nhere is yourname:%s and your age is:%d\n\n",ex,d);
	printf(" %p \n\n ",test);
	printf(" %p \n\n ",&test);
	printf(" %p \n\n",&test[1]);


	
	return 0;
}
