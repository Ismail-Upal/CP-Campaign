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
    int n; cin>>n;
    string s; cin>>s;
    map<string ,int>mp;
    int mx=0;
    for(int i=0;i<n-1; i++){
        string st="";
        st += s[i];st+=s[i+1];
        
        mp[st]++;
        mx=max(mp[st],mx);
    }
    for(auto i:mp){
        if(i.second==mx){
            string s=i.first;
            cout<<s;
            break;
        }
    }
    return 0;
}