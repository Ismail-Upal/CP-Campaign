#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int32_t main()
{
    optimize();
    int t; cin >> t; 
    while(t --){
        int a, b, n; cin >> a >> b >> n; 
        int div = n%3 ; 
        if(div==2)cout<<(a^b)<<endl;
        else if(div==1)cout<<b<<endl;
        else if(div==0)cout<<a<<endl;
    }


    return 0;
}