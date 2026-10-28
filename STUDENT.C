#include<stdio.h>
#include<string.h>
struct student
{
char name[20];
int rollno;
float mark;
char city[20];
char dream[20];
};
void read(struct student s[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("Enter your Name");
scanf("%s",s[i].name);
printf("Enter your Roll no");
scanf("%d",&s[i].rollno);
printf("Enter your mark");
scanf("%f",&s[i].mark);
printf("Enter your city");
scanf("%s",s[i].city);
printf("Enter your dream");
scanf("%s",s[i].dream);
}
}
void display(struct student s[],int n)
{
int i;
printf("\n---student details---\n");
for(i=0;i<10;i++)
{
printf("\nstudent %d\n",i+1);
printf("name:%s\n",s[i].name);
printf("rollno:%d\n",s[i].rollno);
printf("mark:%.2f\n",s[i].mark);
printf("city:%s\n",s[i].city);
printf("dream:%s\n",s[i].dream);
}
}
int main()
{
struct student s[10];
int n;

printf("Enter the number of the student:");
scanf("%d",&n);

read(s,n);
display(s,n);
return 0;
}
