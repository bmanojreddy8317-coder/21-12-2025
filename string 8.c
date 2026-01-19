#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,j,found=0;
    fgets(s,50,stdin);
    s[strcspn(s,"\n")]='\0';
    for(i=0;s[i]!='\0';i++){
        for(j=i+1;s[j]!='\0';j++){
            if(s[i]==s[j]){
                found=1;
                break;
            }
        }
        if(found)
        break;
    }
    if(found)
    printf("Yes");
    else
    printf("N0");
    return 0;
}