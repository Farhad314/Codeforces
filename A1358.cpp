#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        n=n*m;
        if(n%2==0)
            cout<<n/2<<endl;
        else
            cout<<(n/2)+1<<endl;
    }
}
