#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char *delevary="";
	int thick=0;
	int count=0;
	char ch;
	
	while ((ch=getopt(argc,argv, "d:tc:"))!=EOF)
		//printf("%c optind:%d",ch,optind);
		switch (ch){
			case 'd':
				delevary=optarg;
				break;
			case 't':
				thick=1;
				break;
			default:
				fprintf(stderr, "unknown option: '%s' \n",optarg);
				return 1;				
		}
		
		argc -=optind;
		argv +=optind;
		if(thick)
			puts("Thick crust");
		if (delevary[0])
			printf("To be delevered %s.\n", delevary);
		puts ("ingredients:");
		
		for(count=0;count<argc;count++)
			puts(argv[count]);
		return 0;
} 
