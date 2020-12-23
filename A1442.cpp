#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        vector<int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];

        int A = a[0], B = 0;
        bool bad= false;
        for (int i=1; i<n; i++) {
            int S = a[i];
            int x = min(A, S-B);
            if (x < 0) {
                bad = true;
                break;
            }
            A = x;
            B = S-x;
        }

        if (bad)    cout<<"NO\n";
        else        cout<<"YES\n";
    }
}
