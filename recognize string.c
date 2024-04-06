#include<stdio.h>
#include<conio.h>
 #include<string.h>
#include<stdlib.h>
 void main()
{
char s[20],z;
int state=0,i=0;

printf("\n Enter a string:");
gets(s);
while(s[i]!='\0')
{
switch(state)
{
case 0: z=s[i++];
 if(z=='x') state=1;
else if(z=='y')
state=2;
else state=6;
break;
case 1: z=s[i++];
if(z=='x')
 state=3;
else if(z=='y')
state=4;
else
state=6;
                break;
case 2: z=s[i++];
 if(z=='x') state=6;
else if(z=='y')
state=2;
 else state=6;
break;
 case 3: z=s[i++]; if(z=='x')
state=3;
else if(z=='y')
state=2;
else
state=6;
break;
case 4: z=s[i++];
                if(z=='x')
 state=6;
else if(z=='y')
state=5;
else state=6;
break;
case 5: z=s[i++];
if(z=='x')
state=6;
else if(z=='y')
state=2;
else
state=6;
break;
case 6: printf("\n %s is not recognised.",s);
exit(0);
} }
if(state==1)
printf("\n %s is accepted under rule 'x'",s);
else if((state==2)||(state==4))
printf("\n %s is accepted under rule 'x*y+'",s);
else if(state==5)
printf("\n %s is accepted under rule 'xyy'",s); getch();
}
