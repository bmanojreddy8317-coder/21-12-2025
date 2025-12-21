#include <stdio.h>
int main() {
   int a;
   scanf("%d",&a);
   if(a>=-9 && a<=9)
   {
    printf("it is single digit");
   }
    else
    {
        printf("it is non single digit");
    }
    return 0;
}