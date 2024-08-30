//program to implement linked list
# include <stdio.h>
# include <string.h>

struct node 
{
	char name[20];
	int roll;
	int marks;
	struct node *next;
}s1,s2,s3;

void copyname(char s[ ], char str[ ])
{
	int i = 0;
	int l = strlen(s);
	for(i = 0; i < l; i++ )
	{
		str[i] = s[i];
	}
	
}
int main()
{
	char n[20] = "abc";
	copyname(n, s1.name);
	
	s1.roll = 01;
	s1.marks = 80;
	s1.next = &s2;
	
	char n1[20] = "pqr";
	copyname(n1, s2.name);
	s2.roll = 02;
	s2.marks = 90;
	s2.next = &s3;
	
	char n2[30] = "xyz";
	copyname(n2, s3.name);
	s3.roll = 03;
	s3.marks = 95;
	s3.next = NULL;
	
	printf("Details of student s1: \n");
	printf("%s\n", s1.name);
	printf("%d\n", s1.roll);
	printf("%d\n", s1.marks);
	
	printf("Details of student s2: \n");
	printf("%s\n", s1.next->name);
	printf("%d\n", s1.next->roll);
	printf("%d\n", s1.next->marks);
	
	printf("Details of student s3: \n");
	printf("%s\n", s1.next->next->name);
	printf("%d\n", s1.next->next->roll);
	printf("%d\n", s1.next->next->marks);
	
	
	
	
	
	
}

