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
        string s; int j, k; cin >> s >> j >> k;
        vector<int> v;
        for(int i = 1; i <= sz(s); i++){
            v.push_back(i);
        }
        string a, b;
        int cnt = 0;
        do{
            cnt++;
            if(cnt == j) a = s;
            if(cnt == k) b = s;
        }
        while(next_permutation(s.begin(), s.end()));

        int A = 0, B = 0;

        for(int i = 0; i < sz(s); i++){
            if(a[i] == b[i]) A++;
            else B++;
        }
        cout << A << "A" << B << "B" << endl;
    }
    
    return 0;
}