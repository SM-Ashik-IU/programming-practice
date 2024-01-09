#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout<<"How many:"<<endl;
    cin>>a;

    vector<int>s;
    for(int i=0;i<a;i++)
    {
        int x;
        cin>>x;
        s.push_back(x);
    }

    cout<<"Last value:"<<s.back()<<endl;;
}
