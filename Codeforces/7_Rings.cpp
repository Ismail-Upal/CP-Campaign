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
        int n,c; cin>>n>>c;
        ll tot=n*c;
        string s=to_string(tot);
        if(s.size()==5 && s[0]!='0')Y;
        else N;
    }
    return 0;
}