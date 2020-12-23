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
        int n,k;
        cin>>n>>k;
        vector<int>a(n),b(n);
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }


        srt(a);
        desrt(b);


        for(int j=0;j<k;j++){
            if(a[j]<b[j])
                swap(a[j],b[j]);
        }
        for(int j=0;j<n;j++)
            sum+=a[j];
        cout<<sum<<endl;


    }
}

