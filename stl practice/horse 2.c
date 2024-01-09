#include<stdio.h>
int main()
{
    long long int a[4],b,cnt=0;
    int i,j;
    for(i=0; i<4; i++)
    {
        scanf("%lld",&a[i]);
 
    }
    for(i=0;i<4;i++)
    {
       for(j=i+1;j<4;j++)
       {
          if(a[i]==a[j])
          {
             cnt++;
 
             
          }
       }
    }
    printf("%d\n",cnt);
 
 
    return 0;
 