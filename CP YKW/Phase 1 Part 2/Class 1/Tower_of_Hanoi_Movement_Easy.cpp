#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
int n, a, moves = 0; 
void hanoi(int i, char start, char mid, char end){
    if(i == 0) return;
    hanoi(i - 1, start, end, mid);
    moves++;
    if(moves == a) cout << i << " : " << start << " => " << end << endl;
    hanoi(i - 1, mid, start, end); 
}
int32_t main()
{   
    opt();
 
    tc{
        cin >> n >> a;
        moves = 0;
        hanoi(n, 'A', 'B', 'C');
    }
    
    return 0;
}