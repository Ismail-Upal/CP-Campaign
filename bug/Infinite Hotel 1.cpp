#include <bits/stdc++.h>
using namespace std;

int main() {
    
        int N;
        cin >> N;
        
        bool booked[N];
        
        booked[1] = true;           // Room 1 is permanently blocked. No one can stay
        
        for (int guest = 2; guest <= N; ++guest) {
            if (booked[guest] != true) {
                // Guest stays in room 'guest'
                booked[guest] = false;
                
                // he also Books every multiple: 2*guest, 3*guest, ... 
                for (int room = 2 * guest; room <= N; room += guest) {
                    booked[room] = true;
                }
            }
        }
        
        // Now check if room N is still free when guest N arrives
        if (booked[N] == true) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    
    
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long n;
//     cin >> n;

//     // Room 1 is blocked, but n >= 2 by constraints
//     bool freeRoom = true;

//     for (long long i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             freeRoom = false;
//             break;
//         }
//     }

//     if (freeRoom and n != 1)
//         cout << "Yes\n";
//     else
//         cout << "No\n";

//     return 0;
// }
