//Empty function uses in vector

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"How many:"<<endl;
    cin>>n;
    vector<char>s;
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        s.push_back(x);
    }

      // cout<<"Front value:"<<s.front()<<endl;


        for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" "<<endl;
    }
    if(s.empty())
        cout<<"Empty"<<endl;
    else
        cout<<"Not Empty"<<endl;

}


