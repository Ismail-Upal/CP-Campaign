#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N= 1e14;
int main()
{
    int t; cin>>t;
    while(t--){
        int n, mul=1; cin>>n;
        for(int i=1; i<=n; i++){
            mul*=i;
        }
        cout<<mul%10<<endl;
    }
    return 0;
}