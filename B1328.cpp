#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k;
    cin>>t;
    while(t--){

        cin>>n>>k;
        string currString(n,'a');

        for(int i=n-2;i>=0;i--){

            long long numStaysB=n-1-i;
            if(k<=numStaysB){

                currString[i]='b';
                currString[n-k]='b';
                cout<<currString<<endl;
                break;
            }
            k=k-numStaysB;
        }
    }
}
