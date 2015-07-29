#include <stdio.h>

int main()
{
	const int i=10;
	int *ptr;
	ptr=&i;
	if(printf("hello....")){}
	*ptr=(int *)20;
	
	printf("%i",i);
	return 0;
	}
