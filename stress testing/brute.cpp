#include <iostream>
using namespace std;
using ll =long long;
ll Josephus(ll N, ll k)
{

    // Initialize variables i and ans with 1 and 0
    // respectively.

    ll i = 1, ans = 0;

    // Run a while loop till i <= N

    while (i <= N) {

        // Update the Value of ans and Increment i by 1
        ans = (ans + k) % i;
        i++;
    }

    // Return required answer
    return ans + 1;
}

// main function
int main()
{

    long long N, k; cin >> N >> k;
    cout << Josephus(N, k) << endl;
    return 0;
}