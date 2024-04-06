#include<stdio.h>
float a,b,c,f;
    void bisection(float a,float b)
    {
        c=(a+b)/2;
        for(int i=0;i<5;i++)
        {
            f=c*c*c+3*c*c+12*c+8;
            if(f<0)
                a=c;
            else
                b=c;
            c=(a+b)/2;
        }
    }
int main()
{
    printf("enter a: ");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    bisection(a,b);
    printf("the value of root is %f",c);
    return 0;
}
