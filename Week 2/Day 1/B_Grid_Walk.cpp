#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,m; cin>>n>>m;
    ll r,c; cin>>r>>c;
    char a[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    string s; cin>>s;
    ll sz=s.size();
    for(int i=0;i<sz;i++){
        if(s[i]=='U' && r>1 && a[r-1][c]=='.')r--;
        else if(s[i]=='D' && r<n && a[r+1][c]=='.')r++;
        else if(s[i]=='L' && c>1 && a[r][c-1]=='.')c--;
        else if(s[i]=='R' && c<m && a[r][c+1]=='.')c++;

    }
    cout<<r<<" "<<c;
    return 0;
}