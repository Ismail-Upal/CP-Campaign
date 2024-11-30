#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int a, b; cin>>a>>b;
        int cnt = 0 ;
        int diff = abs(a-b);
        cout<<(diff+10-1) / 10<<endl;
    }
    return 0;
}