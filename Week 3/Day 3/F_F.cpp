#include<bits/stdc++.h>

using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    unordered_map<char, int> countS, countT;
    string atcoder = "atcoder";

    for (char c : S) countS[c]++;
    for (char c : T) countT[c]++;

    int s = countS['@'], t = countT['@'];

    for (char c = 'a'; c <= 'z'; c++) {
        if (countS[c] != countT[c]) {
            if (atcoder.find(c) != string::npos) {
                int diff = abs(countS[c] - countT[c]);
                if (countS[c] > countT[c]) {
                    t -= diff;
                } else {
                    s -= diff;
                }
                if (s < 0 || t < 0) {
                    cout << "No" << endl;
                    return 0;
                }
            } else {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
