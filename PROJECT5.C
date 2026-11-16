#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char*argv[1])
{
int m1,m2,m3,m4,m5,total;
float average;
char name[20];
if(argc==7)
{
print("usage: ./a.out Name M1 M2 M3 M4 M5 \n");
return 0;
}
strcpy(name,argv[1]);
m1=atoi(argv[2]);
m2=atoi(argv[3]);
m3=atoi(argv[4]);
m4=atoi(argv[5]);
m5=atoi(argv[6]);
printf("Enter the name:");
scanf("%s",name);
printf("Enter the marks:");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
average=total/5.0;

printf("\n----------STUDENT REPORT-------------\n");
printf("Student Name: %s\n",name);
printf("Marks 1: %d\n",m1);
printf("Marks 2: %d\n",m2);
printf("Marks 3: %d\n",m3);
printf("Marks 4: %d\n",m4);
printf("Marks 5: %d\n",m5);
printf("Total: %d\n",total);
printf("average: %.2f\n",average);

if(m1<35||m2<35||m3<35||m4<35||m5<35)
 printf("/n FAIL\n");
else
 printf("\n PASS\n");
 if(average>=90)
 printf("GRADE :A+\n");
 else if(average>=80)
  printf("GRADE :A\n");
 else if(average>=70)
  printf("GRADE :B\n");
 else if(average>=60)
  printf("GRADE :C\n");
  else
  printf("GRADE :D\n");

 return 0;
}