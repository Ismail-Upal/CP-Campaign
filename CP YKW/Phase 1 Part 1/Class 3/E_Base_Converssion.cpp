 
#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n==0) return;
    solve(n/2);
    cout<<n%2;
}
int main()
{
    int t; cin>>t;
    while(t--){    
        int n; cin>>n;
        if(n==0)cout<<0<<endl;
        else{
            solve(n);
            cout<<endl;
        }
    }
    return 0;
}     