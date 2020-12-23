#include<iostream>
using namespace std;

int main()
{
    int n,a[n],count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=2;i<=n;i++)
    {
        if(a[i]<a[i-1] && a[i]<a[i-2])
            count++;
    }
    cout<<count<<endl;
}
