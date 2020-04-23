#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,n,p=1,s=0;
int a[10]; // a[] is a name of arrat
printf("enter the number of elements:");
scanf("%d",&n); //size of array define by n
for(i=0;i<n;i++)
{
scanf("%d",&a[i]); // Here we getting elements of array by user
p=p*a[i]; //Here we multiplying all the elements of array
}
for(i=1;i<=p;i++) // get grasp concept please go to readme.txt file
{
for(j=0;j<n;j++)
{
if(i%a[j]==0)
{
s=s+1;
}
else
{
s=0;
break;
}
}
if(s==n)
{
printf("%d",i);
break;
}
}

}
``
