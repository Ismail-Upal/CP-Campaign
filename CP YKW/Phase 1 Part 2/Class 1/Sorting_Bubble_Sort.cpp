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
 
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(v[j] > v[j + 1]){
                swap(v[j], v[j+1]);
                cnt ++;
            }
        }
    }
    cout << "Array is sorted in " << cnt << " swaps." << endl;
    cout << "First Element: " << v[0] << endl;
    cout << "Last Element: " << v[n-1] << endl;
    
    return 0;
}