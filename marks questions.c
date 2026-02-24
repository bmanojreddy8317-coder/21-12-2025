#include <stdio.h>

int main()
{
    int marks;
    scanf("%d",&marks);

    switch (marks / 10)
    {
        case 1:
            printf("Grade A");
            break;

        case 2:
            printf("Grade B");
            break;

        case 3:
            printf("Grade C");
            break;

        case 4:
            printf("Grade D");
            break;

        case 5:
            printf("Grade E");
            break;

        case 6:
            printf("Grade F");
            break;

        case 7:
            if (marks >= 31)
                printf("Grade Supplementary");
            else
                printf("Grade Fail");
            break;

        default:
            printf("Grade Fail");
    }

    return 0;
}
