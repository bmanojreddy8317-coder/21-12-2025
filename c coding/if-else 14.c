#include <stdio.h>
int main() {
int a;
scanf("%d",&a);
if(a>=90 && a<=100)
{
    printf("grade A");
}    
else if(a>=75 && a<=89)
{
    printf("grade B");
}
else if(a>=50 && a<=74)
{
    printf("grade c");
}
else
{
    printf("fail");
}
    return 0;
}