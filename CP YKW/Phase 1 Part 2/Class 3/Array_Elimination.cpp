#include<bits/stdc++.h>
using namespace std;
const int N = 1e8 + 9;
bool prime[N];

void sieve() {
    fill(prime, prime + N, true);
    prime[0] = prime[1] = false;  

    for (int i = 2; i * i < N; i++) {
        if (prime[i]) {
            for (int j = i * i; j < N; j += i) {
                prime[j] = false;
            }
        }
    }
}
int32_t main() {

  int n; cin >> n;
  sieve();
  cout << prime[5];
  return 0;
}