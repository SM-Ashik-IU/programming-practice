#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>s1;
    int i;
    s1.push_back(10);
      s1.push_back(12);
        s1.push_back(3);
          s1.push_back(100);
            s1.push_back(210);
            s1.push_back(9);

            cout<<"Before sorting:"<<endl;

            for( int i=0; i<s1.size();i++)
            {
              // cout<<s1[i]<<endl;
               printf(" %d  ",s1[i]);
            }
   // printf("%d",s1[i]);
    //cout<<s1[0]<<endl;

    sort(s1.begin(),s1.end());
    cout<<endl;

     cout<<"After sorting:"<<endl;

            for( int i=0; i<s1.size();i++)
            {
              // cout<<s1[i]<<endl;
               printf(" %d  ",s1[i]);
            }

}
