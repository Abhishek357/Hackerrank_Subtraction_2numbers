#include<stdio.h>
int count(int i,int j)
{
if(i%j==0)
{
return i/j;
}
return(i/j+ count(j,i%j));
}
int main()
{
int i,j,k;
scanf("%d %d",&i,&j);
c=count(i,j);
printf("%d",k);
return 0;
} 
