#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0,a;
    sort(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++) {

        if (s[i] == s[i + 1]) {
            cnt++;
        }
    }
    a=s.length()-cnt;
    cout<<a<<endl;
    if(a%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}
