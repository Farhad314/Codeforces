#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

		int n;
		cin>>n;
		n /= 2;

		long long ans = 0;
		for (long long i = 1; i <= n; i++) {
			long long total = 8*i*i;
			ans=ans+total;
		}

		cout<<ans<<endl;
	}


}
