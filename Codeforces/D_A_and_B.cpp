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
        vector<int> a, b;
        for(int i = 0; i < n; i++){
            if(s[i] == 'a') a.push_back(i + 1);
            else b.push_back(i + 1);
        }

        ll ansA = 0, ansB = 0;
        int mid = sz(a) / 2;

        for(int i = mid - 1, j = 0; i >= 0; i--, j++){
            ansA += a[mid] - a[i] - 1 - j;
        }
        for(int i = mid + 1, j = 0; i < sz(a); i++, j++){
            ansA += a[i] - a[mid] - 1 - j;
        }

        mid = sz(b) / 2;
        for(int i = mid - 1, j = 0; i >= 0; i--, j++){
            ansB += b[mid] - b[i] - 1 - j;
        }
        for(int i = mid + 1, j = 0; i < sz(b); i++, j++){
            ansB += b[i] - b[mid] - 1 - j;
        }

        cout << min(ansA, ansB) << endl;
    }
    
    return 0;
}