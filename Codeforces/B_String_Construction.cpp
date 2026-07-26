#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, k; cin >> n >> k;
    if(k >= n - 1){
        cout << -1 << endl; return;
    }

    int z = 1, o = 1;
    deque<char> s = {'0', '1'};
    n -= 2;

    while(n > 0){
        if(k > 0){
            if(z > o) s.push_back('1'), o++;
            else s.push_front('0'), z++;
            k--; n--;
        }
        else{ 
            while(n > 0){
                if(z > o){
                    if(s.back() == '1') s.push_front('1');
                    else s.push_back('1');
                    o++;
                }
                else{
                    if(s.back() == '1') s.push_back('0');
                    else s.push_front('0');
                    z++;
                }
                n--;
            }
        }
    }

    for(auto i : s) cout << i ;
    cout << endl;

}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}