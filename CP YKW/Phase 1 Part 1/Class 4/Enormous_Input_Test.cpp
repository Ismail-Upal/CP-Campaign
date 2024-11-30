
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
 
    int ans = 0, n, k; cin>>n>>k;
    while(n--){
        int num ; cin>>num;
        if(num%k ==0)ans++;
    }
    cout<<ans;
    return 0;
}