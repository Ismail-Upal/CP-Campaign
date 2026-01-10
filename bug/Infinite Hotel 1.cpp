#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    booked[n];

    for (int i = 1; i <= n; i++) {
        booked[i] = false;
    }


    for (int guest = 1; guest < n; guest++) {
        if (booked[guest] == false){
            for (int room = 1; room <= n; room++) {
                if (room % guest == 0) {
                    booked[room] = true;
                }
            }
        }
    }

    
    if (booked[n] == false){
        cout << "No\n";
    }
    else{
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
