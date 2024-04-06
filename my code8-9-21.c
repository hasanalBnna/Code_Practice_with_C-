#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x*x+3*x*x+12*x+8
void main()
{
    float x0,x1,x2,f0,f1,f2,e;
    //clrscr();
    printf("enter valurs: ");
    scanf("%f %f",&x0,&x1);
    printf("enter e= ");
    scanf("%f",&e);
    for(int i=0;i<5;i++)
    {
        do
        {
            f0=f(x0);
            f1=f(x1);
            x2=(x0+x1)/2;
            f2=f(x2);
            if(f0*f2<0)
            {
                x1=x2;
            }
            else
            {
                x0=x2;
            }
            printf("root = %f\n",x2);

        }
        while(fabs(f2)>e);
        printf("x0=%f\t x1=%f\t x2=%f\t \n",x0,x1,x2);
    }
    getch();
}
