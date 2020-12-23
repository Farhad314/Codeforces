#include<bits/stdc++.h>
#define srt(v) sort(v.begin(),v.end());
#define desrt(v) sort(v.begin(),v.end(),greater<int>());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int A=-1,B,C;
        for(int c=0; c*7<=n; c++)
        {
            for(int b=0; b*5+c*7<=n; b++)
            {
                int rem = n-b*5-c*7;
                if(rem%3==0)
                {
                    A=rem/3,B=b,C=c;
                break;
                }

            }
            if(A>=0) break;
        }

        cout<<A<<" ";
        if(A>=0) cout<<B<<" "<<C<<" ";
        cout<<endl;
    }
}
