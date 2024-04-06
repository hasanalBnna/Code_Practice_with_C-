#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
int arr[10],temp,i,j;
cout<<"Enter the numbers:";
for(i=0;i<10;i++)
{
cin>>arr[i];
}
for(i=0;i<10;i++)
{
for(j=0;j<10-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
cout<<"sorted order:";
for(j=0;j<10;j++)
{
cout<<" "<<arr[j];
}



getch();
}
