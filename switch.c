#include<stdio.h>
int main()
{
    char grade;
    printf("please enter the grade");
    scanf("%c",&grade);
    switch(grade)
    {
        case 'a':
        printf("u r the best\n");
        break;
        case 'b':
        printf("u r the good\n");
        break;
        case 'c':
        printf("u r the average\n");
        break;
        case 'd':
        printf("u r atlist not fail\n");
        break;
        case 'f':
        printf("u failed \n");
        break;
        default:
            printf("fuck off");
    }
    return 0;
}
