#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    fgets(s,50,stdin);
    //s[strcspn(s,"\n")]='\0';
    if(strstr(s,"error")!=NULL)
    printf("found");
    else
    {
        printf("not found");
    }
    return 0;
}