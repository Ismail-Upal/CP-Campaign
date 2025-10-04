#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int h, d;
int rec(int i, int H, int cnt){
    if(i >= d) return 0;
    
    int op1 = 1e9, op2 = 1e9;

    if(cnt > 0) op2 = rec(i, H + 1, 0) + 1;
    if(H - cnt + 1 > 0){
        op1 = rec(i + 1, H - cnt + 1, cnt + 1) + 1;
    }
   
    return min(op1, op2);
}

int main()
{   
    opt();
    
    tc{
        cin >> h >> d;
        cout << rec(0, h, 0) << endl;

    }
    
    return 0;
}