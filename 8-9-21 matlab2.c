#include<stdio.h>
float a,b,c,fa,fb,fc;
void bisection(float a,float b)
{
    c=(a+b)/2;
    for(int i=0;i<5;i++)
    {
        fa=a*a*a+3*a*a+12*a+8;
        fb=b*b*b+3*b*b+12*b+8;
        fc=c*c*c+3*c*c+12*c+8;
        if(fc=0)
            printf("we have root %f",c);
        else if
            (fa*fc<c)
            b=c;
        else
            a=c;
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
    printf("the value of root is %.2f",c);
    printf("the value is %.2f",a);
    printf("the value is %.2f",b);
    return 0;
}
