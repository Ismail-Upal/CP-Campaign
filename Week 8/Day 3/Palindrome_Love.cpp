#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________

int32_t main()
{
    optimize();
 
    tc{
        int n; cin >> n; 
        string s; cin >> s;
        string t = s;
        reverse(t.begin(), t.end());
        int ans;
        if(t == s) ans = 0;
        else{
            string w;
            w.push_back(s[0]);
            w.push_back(s[n-1]);
            int i=1, j=n-2;
            while(i<j){
                if(s[i]== s[j])i++, j--;
                else break;
            }
            if(i==j or n==2)ans = -1;
            else ans = 1;
        }
        cout << ans << endl;
    }
    return 0;
}
