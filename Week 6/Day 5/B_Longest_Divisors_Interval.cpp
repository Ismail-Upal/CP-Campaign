#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        long long n;cin>>n;
        int ans=0;
        for(int i=1; i<=100; i++){
            if(n%i!=0){
                cout<<i-1<<endl; break ;
            }
        }
    }
    return 0;
}