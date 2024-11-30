
#include<bits/stdc++.h>
using namespace std;
long long n;
bool ok=false;
void solve(long long i){
    if(i>n)return;
    if(i==n){
        ok=true;
        return;
    }
    solve(i*10);
    solve(i*20);
}
int main()
{
    int t; cin>>t;
    while(t--){
        cin>>n;
        ok=false;
        solve(1); 
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}