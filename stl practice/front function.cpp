//show front value using vector

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

       cout<<"Front value:"<<s.front()<<endl;

}

