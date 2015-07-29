
#include <stdio.h>
#include <stdlib.h>




typedef enum {count,weight,volume} units;

typedef union {
	int count;
	int weight;
	int volume;
} fruit;

typedef struct std {
	int id;
	char * name;
	double gpa;
	unsigned int gender:1;
	unsigned int month:4;
	struct std * next;
} std;
void bonus(std *s)
{
	s->gpa +=2; //(*s).gpa +=2;
}

std* create(char *name)
{
	std* i=malloc(sizeof(std));
	i->name=name;
	i->id=0;
	i->gpa=0;
	i->gender=0;
	i->month=5;
	i->next=NULL;
	
	return i;
}

int main(int argc, char *argv[])
{
	std s  = { 1,"mohammed", 96,0x1,0x4,NULL};
	std *head=create("mohammed");
	bonus(&s);
	printf("Student id:%i \n Student name:%s GPA:%.2f\n", s.id,head->name,s.gpa);
	fruit f={10};
	printf("The quantity is %d\n", f.count);
	
	
	
	std ptr[2];
	printf("\n%li\n",(&ptr[0].id-&ptr[1].id));
	printf("\n%p\n",&ptr[0].id);
	printf("\n%p\n",&ptr[1].id);

	printf("%li",sizeof(std));
	return 0;
}
