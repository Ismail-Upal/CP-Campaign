//https://www.codechef.com/problems/PERMOR
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
        for(int i=n;i>0;i--)cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
//because when we do or opertion 
// the result always will be greater than max number (3 | 2) >= 3