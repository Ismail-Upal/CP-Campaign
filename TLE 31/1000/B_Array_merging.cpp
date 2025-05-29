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
 
    tc{
        int n; cin >> n;
        vector<int> a(n), b(n);
        map<int, int> mp1, mp2;
        int curr, cnt = 1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i == 0) curr = a[i];
            else if(curr == a[i]){
                cnt ++;
            }
            else{
                mp1[curr] = max(mp1[curr], cnt);
                curr = a[i];
                cnt = 1;
            }
            mp1[curr] = max(mp1[curr], cnt);
        }
        curr = 0, cnt = 1;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(i == 0) curr = b[i] ;
            else if(curr == b[i]){
                cnt ++;
            }
            else{
                mp2[curr] = max(mp2[curr], cnt);
                curr = b[i];
                cnt = 1;
            }
            mp2[curr] = max(mp2[curr], cnt);
        }
        int ans = 0;
        for(auto i : mp1){
            ans = max(ans, i.second + mp2[i.first]); 
        }
        for(auto i : mp2){
            ans = max(ans, i.second + mp1[i.first]); 
        }
        cout<< ans << endl;
    }
    
    return 0;
}