#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{	opt();
 
    tc{
        string s; cin >> s;
        ll sum =0, two = 0, three = 0;
        for(auto i : s){
            sum += i-'0';
            if(i=='2')two ++ ;
            if(i=='3')three ++ ;
        }
        if(sum % 9 ==0){
            cout << "YES" << endl;
            continue;
        }
        // sum = sum % 9;
        int ans =0;
        for(int i=0; i <= two; i++){
            ll sum_new = 0;
            for(int j=0; j <= three; j++){
                sum_new = (2*i) + (6*j);
                if((sum + sum_new) % 9 == 0){
                    ans = 1;
                    break;
                }
            }
            // if((sum + sum_new) % 9 ==0){
            //         ans = 1;
            //         break;
            //     }
        }
        if(ans ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}