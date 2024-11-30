#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int pow=1;
        vector<int>v;
        while(n>0){
            if(n%10 > 0){
                v.push_back((n%10) * pow);
            }
            n/=10;
            pow*=10;
        }
        cout<<v.size()<<endl;
        for(auto i: v)cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}