#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    int k; cin >> k;
    int num = 19, cnt = 0;
    while(1){
        string s = to_string(num);
        int sum = 0;
        for(auto i : s) sum += i - '0';
        if(sum == 10)cnt++;
        if(cnt == k){
            cout << num ;
            break;
        }
        num ++;
    }
    return 0;
}