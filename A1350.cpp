#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,a=0;
        cin>>n>>k;
        for(int j=0;j<k;j++){
            for(int i=2;i<=n;i++){
                if(n%i==0){
                    a=i;
                    break;
                }
            }
            n=n+a;
        }
        cout<<n<<endl;

    }
}





