//https://codeforces.com/problemset/problem/1722/C
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
        ll n; cin>>n;
        map<string,int>mp;
        vector<string>a(n);
        for(int i=0;i<n;i++){cin>>a[i];mp[a[i]]++;}
        vector<string>b(n);
        for(int i=0;i<n;i++){cin>>b[i];mp[b[i]]++;}
        vector<string>c(n);
        for(int i=0;i<n;i++){cin>>c[i];mp[c[i]]++;}
        ll na=0,nb=0,nc=0;
        
        for(int i=0;i<n;i++){
            if(mp[a[i]]==1)na+=3;
            else if(mp[a[i]]==2)na+=1;
        }
        for(int i=0;i<n;i++){
            if(mp[b[i]]==1)nb+=3;
            else if(mp[b[i]]==2)nb+=1;
        }
        for(int i=0;i<n;i++){
            if(mp[c[i]]==1)nc+=3;
            else if(mp[c[i]]==2)nc+=1;
        }
        cout<<na<<" "<<nb<<" "<<nc<<endl;
    }
    return 0;
}