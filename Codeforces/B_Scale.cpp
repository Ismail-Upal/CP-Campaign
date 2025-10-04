#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        int a[n][n];
        for(int i=0;i<n;i++){
            string s; cin>>s;
            for(int j=0;j<n;j++){
                a[i][j]=s[j]-'0';
            }
        }
        for(int i=0;i<n;i+=k){
            for(int j=0;j<n;j+=k){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}