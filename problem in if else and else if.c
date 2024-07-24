#include<stdio.h>
int main()
{
    int a;
    printf("please neter your age \n\n\n");
    scanf("%d",&a);
    if(a>=18){
        printf("hey bro you can log in");
    }
    else if (a==0){
        printf("sorry u just born yet ");
    }
    else if (a<0){
        printf("sorry u r not born yet");
    }
    else if (a>=100){
             printf("u still dont die ????");// here is bug please solve it and tell me where the problem was
             }
    else {
        printf("sorry you cany");
    }

return 0;
}

