#include <stdio.h>

int main()
{
int i=0,count=0;
char p[100];
printf("Enter the Input : ");
scanf("%s",p);


printf("01111110");

for(i=0;p[i]!='\0'; i++)
{
    if(p[i]=='1')
        count++;
    else
        count=0;
printf("%c",p[i]);
if(count==5)
    {
        printf("0");
        count=0;
    }
}
printf("01111110");

return 0;
}
