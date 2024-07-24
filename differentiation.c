#include<stdio.h>
#include<math.h>
int main()
{
    double x, y,z,ans;

    printf("give the value of y=\n\n\n");// not get the value still
    scanf("%lf",&y);
     z=y-1;
    printf("d/dx(X^%.1lf)\n\n\n",y);
    printf("%.0lfX^%.0lf\n\n\n",y,z);
    printf("now give a value of x please \n X=\n\n\n");
    scanf("%lf",&x);
    ans=y*pow(x,z);
    printf("your answer is \n\nANS=%.0lf",ans);

    return 0;
}
