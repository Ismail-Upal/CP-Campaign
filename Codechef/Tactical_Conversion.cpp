#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        string s; cin >> s;
        int sm = 0;
        vector<int> v;

        for(auto i : s){
            if(i == '0'){
                if(sm != 0) v.push_back(sm);
                sm = 0;
            }
            else sm += i - '0';
        }
        if(sm != 0) v.push_back(sm);

        int thre = 0, two = 0;
        for(int i : v){
            if(i == 3) thre++;
            if(i == 2) two++;
        }
        // cout << thre << " " << two << endl;
        if(two >= 1 and thre >= 1){
            cout << "YES" << endl;
            continue;
        }

        if(two == 1 and sz(v) == 1){
            cout << "NO" << endl;
        }
        else if(thre == 1 and sz(v) == 1){
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
        
    }
    
    return 0;
}