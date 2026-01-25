#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{   
    ll n; cin >> n;
    ll cnt = 0;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            cnt++;
            if(i != n / i) cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main()
// {   
//     ll n; cin >> n;
//     ll ways = 0;

//     for(ll k = 1; k <= n; k++){
//         // can i give k chocolates to each person

//         ll total_chocolates = 0;

//         while(total_chocolates < n){
//             total_chocolates += k;
//         }

//         if(total_chocolates == n) ways++; 
//     }

//     cout << ways;
    
//     return 0;
// }

// How many ways are there to distribute n chocolates equally?