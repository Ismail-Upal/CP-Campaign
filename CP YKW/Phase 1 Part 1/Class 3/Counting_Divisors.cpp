#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=1e6+1;
int a[N];
int main()
{
    for(int i=1; i<=N; i++){
        for(int j=i; j<=N; j+=i){
            a[j]++;
        }
    }
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}

