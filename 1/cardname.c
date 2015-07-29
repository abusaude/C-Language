#include <stdio.h>

void printString(char *msg) // we can use char msg[]
{
	puts("print sting");
	printf("Message is: %s\n",(msg+8));
	printf("msg occupies %lu bytes \n", sizeof(msg));
}
int main()
{
	char card_name[3];
	char *name=card_name;
	puts("please enter the card name");
	scanf("%2s", name);
	//fgets(card_name, sizeof(card_name), stdin);
	//fgets(name,5,stdin);
	//printf("name is :%s\n",name);
	int val=0;
	fputs(card_name, stdout);
	switch (card_name[0])
	{
		case 'K': val=10;
				break;
		case 'Q':val=11;
				break;
	    default:val=12;
	}
	
	printf("\nvalue=%d ",val);
	
	char msg[]="mohammed abu saude";
	printf("Sizeof msg: %lu\n", sizeof(msg));
	printString(msg);
	int doses[]={1,3,2,1000};
	printf("Issue does %c\n", 3[doses]); //offset of the aray
	printf("1st element is: %i, or %i\n", doses[0],*(doses+1));
	return 0;
}
