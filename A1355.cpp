#include<bits/stdc++.h>
#define srt(v) sort(v.begin(),v.end());

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        k--;
        while(k--){
            stringstream ss;
            ss<<n;
            string x;
            ss>>x;
            srt(x);
            //cout<<"checking 0 1st time x[0]="<<x[0]<<"  x[0]-0 "<<x[0]-'0'<<endl;
            if(x[0]=='0')
                break;
            //cout<<" x[0]-0= "<<x[0]-'0'<<"  %%%last no="<<x[x.length()-1]<<endl;
            n=n+((x[0]-'0')*(x[x.length()-1]-'0'));
        }
        cout<<n<<endl;
    }
}

