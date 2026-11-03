#include<stdio.h>
int main()
{
char ch;
FILE *fp;
fp=fopen("data.txt","w");
fprintf(fp,"learning a Computer language was new to me");
fclose(fp);
fp=fopen("data.txt","a");
fprintf(fp,"I am comfortable with sir's teaching");
fclose(fp);
fp=fopen("data.txt","r");
while ((ch=fgetc(fp))!=EOF);
{
printf("%c",ch);
}
fclose(fp);
return 0;
}



