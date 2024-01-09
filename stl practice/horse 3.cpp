#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=1,s=4;
    int s1[4];
    for(i=0;i<4;i++)
    {
        cin>>s1[i];
    }


     for(i=0;i<3;i++)
    {
        if(s1[i]!=s1[i+1])
        {
            j++;
        }
    }

    int r=s-j;
    cout<<r<<endl;

}
