#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; while (t--)

const int N = 1e6;
int a[N], b[N];

ll merge_and_count(int l, int r) {
    if (l >= r) return 0;

    int mid = l + (r - l) / 2;
    ll cnt = merge_and_count(l, mid);
    cnt += merge_and_count(mid + 1, r);

    // Merge process
    int lp = l, rp = mid + 1, idx = l;
    for(int i = l; i <= r; i++){
        if(lp > mid) b[i] = a[rp++];
        else if(rp > r) cnt += rp - mid, b[i] = a[lp++];
        else if(a[lp] <= a[rp]) b[i] = a[lp++];
        else {
            cnt += rp - mid;
            b[i] = a[rp++];
        }
    }
    for (int i = l; i <= r; i++) {
        a[i] = b[i];
    }

    return cnt;
}

int32_t main() {
    opt();
    tc {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];

        cout << merge_and_count(1, n) << endl;
    }
    return 0;
}
