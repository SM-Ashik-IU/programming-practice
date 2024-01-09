#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,i=0;
    scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
    if(s1==s2 )
    {
        i++;
    }
     if(s2==s3 )
    {
        i++;
    }
     if( s3==s4)
    {
        i++;
    }
    printf("%d\n",i);
}
