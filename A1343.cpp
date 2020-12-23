#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<1000;i++){
            int x=3;
            x=pow(x,i);
            if(n%x==0){
              cout<<n/x<<endl;
              break;
            }
        }
    }
}

