#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long a, b, c; cin >> a >> b >> c;
        long long s = a + b + c;
        long long x = s / 2;
        
        if(s % 2 == 0 and a <= x and b <= x) cout << "Yes\n";
        else cout << "No\n"; 
    }
}