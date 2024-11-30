#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1073741824 
const int N = 1e6+3;
int ar [N];
int main()
{
    int a, b, c; cin>>a>>b>>c;

    for(int i=1; i<=N; i++){
        for(int j=i; j<=N; j+=i){
            ar [ j ] ++;
        }
    }

    ll sum=0;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int k=1; k<=c; k++){
                ll d = (i*j*k);
                sum+=ar[d]%mod;
            }
        }
    }
    cout<<sum;
    return 0;
}

