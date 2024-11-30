
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    optimize();
    int t; cin>>t;
    while(t--){
        int n; cin>>n ;
        int i=2;
        while(i<=n){
            cout<<i<<" ";
            i++;
        }
        cout<<1<<endl;
    }
    return 0;
}