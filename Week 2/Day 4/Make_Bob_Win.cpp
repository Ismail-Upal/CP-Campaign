#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    tc{
        int n; cin>>n;
        string s; cin>>s;
        int ans=0;
        if(s[0]=='0')ans++;
        if(n>1){
            if(s[n-1]=='0')ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}