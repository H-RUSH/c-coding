#include<stdio.h>
int main()
{
    int a ;
    printf("please type the condition u want to know ?\n");
    scanf("%d",&a);
    printf("so you want %d condition to know?\n",a);
    printf("here it is\n");
    switch(a)
    {
    case '1':
        printf("im a fire fighter ");
        break ;
    case '2':
        printf("do you wish me to leave before finishing my stroy?");
        break ;
    case '3':
        printf("acho acho achaccho maco maco macaccho");
        break ;
    default:
        printf("illuminati illumanati ");
    }
    return 0;
}
