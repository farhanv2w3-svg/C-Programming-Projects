#include<stdio.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("data.txt","w");
if (fp==NULL)
{
printf("Error");
}
fprintf(fp,"welcome to C programming");
fclose(fp);
fp=NULL;
fp=fopen("data.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("c",ch);
}
fclose(fp);
fp=NULL;
fp=fopen("data.txt","a");
if(fp==NULL)
{
printf("error");
}

fprintf(fp,"comparing to other programming languages C is little bit difficult but i am able to understand it thanks to our trainer , he teaches really well");
fclose(fp);
fp=NULL;
fp=fopen("data.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
fp=NULL;
return 0;
}
