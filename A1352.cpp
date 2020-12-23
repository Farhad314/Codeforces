#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i=1;
        vector<int>v;
        cin>>n;
        while(n){
            if(n%10>0){
                v.push_back(n%10*i);
            }
            n/=10;
            i*=10;
        }
        cout<<v.size()<<endl;
        for(int j=0;j<v.size();j++)
            cout<<v[j]<<" ";
        cout<<endl;

    }
}
