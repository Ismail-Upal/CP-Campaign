#include <bits/stdc++.h>
using namespace std;

const int MAX_D = 365;
const int N = 26;

int D;
int c_arr[N];
int s_arr[MAX_D][N];
int t_arr[MAX_D];             // 0-based day -> chosen type
set<int> pos[N];              // type -> set of 1-based days

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

// Total penalty currently accumulated by a single contest type
long long penalty_of_type(int type) {
    long long pen = 0;
    int prev = 0;
    for (int d : pos[type]) {
        long long g = d - prev - 1;
        pen += g * (g + 1) / 2;
        prev = d;
    }
    long long g = D - prev;                  // gap after last occurrence
    pen += g * (g + 1) / 2;
    return 1LL * c_arr[type] * pen;
}

// Δscore if we change day `day` to `new_type`
long long compute_delta(int day, int new_type) {
    int old_type = t_arr[day];
    if (old_type == new_type) return 0;

    int d1 = day + 1;                        // 1-based day
    long long delta = 0;

    // ---- Remove d1 from old_type ----
    {
        auto it = pos[old_type].find(d1);
        int prv = (it == pos[old_type].begin()) ? 0 : *prev(it);
        auto nx = next(it);
        int nxt = (nx == pos[old_type].end()) ? D + 1 : *nx;

        long long g1   = d1 - prv - 1;
        long long g2   = nxt - d1 - 1;
        long long gNew = nxt - prv - 1;

        long long oldPen = g1 * (g1 + 1) / 2 + g2 * (g2 + 1) / 2;
        long long newPen = gNew * (gNew + 1) / 2;

        delta -= 1LL * c_arr[old_type] * (newPen - oldPen);
    }

    // ---- Add d1 to new_type ----
    {
        auto it = pos[new_type].upper_bound(d1);
        int nxt = (it == pos[new_type].end()) ? D + 1 : *it;
        int prv = (it == pos[new_type].begin()) ? 0 : *prev(it);

        long long g1   = d1 - prv - 1;
        long long g2   = nxt - d1 - 1;
        long long gOld = nxt - prv - 1;

        long long oldPen = gOld * (gOld + 1) / 2;
        long long newPen = g1 * (g1 + 1) / 2 + g2 * (g2 + 1) / 2;

        delta -= 1LL * c_arr[new_type] * (newPen - oldPen);
    }

    // ---- Immediate score gain from s ----
    delta += s_arr[day][new_type] - s_arr[day][old_type];
    return delta;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> D;
    for (int i = 0; i < N; i++) cin >> c_arr[i];
    for (int d = 0; d < D; d++)
        for (int i = 0; i < N; i++)
            cin >> s_arr[d][i];

    // ---------- Greedy initialisation ----------
    int last[N] = {0};
    for (int d = 0; d < D; d++) {
        int best = 0;
        long long best_gain = LLONG_MIN;
        for (int i = 0; i < N; i++) {
            long long gain = (long long)s_arr[d][i]
                           - 1LL * c_arr[i] * (d + 1 - last[i]);
            if (gain > best_gain) {
                best_gain = gain;
                best = i;
            }
        }
        t_arr[d] = best;
        pos[best].insert(d + 1);
        last[best] = d + 1;
    }

    // ---------- Initial score ----------
    long long score = 0;
    for (int d = 0; d < D; d++) score += s_arr[d][t_arr[d]];
    for (int i = 0; i < N; i++) score -= penalty_of_type(i);

    // ---------- Simulated Annealing ----------
    double T = 1500.0;
    const double T_min = 1.0;
    const double alpha = 0.99998;
    uniform_real_distribution<double> ur(0.0, 1.0);

    auto t0 = chrono::steady_clock::now();
    const double TIME_LIMIT = 1.85;          // seconds

    while (true) {
        auto now = chrono::steady_clock::now();
        double elapsed = chrono::duration<double>(now - t0).count();
        if (elapsed > TIME_LIMIT) break;

        int day      = (int)(rng() % D);
        int new_type = (int)(rng() % N);
        if (new_type == t_arr[day]) continue;

        long long delta = compute_delta(day, new_type);

        bool accept = (delta >= 0) ||
                      (exp((double)delta / T) > ur(rng));

        if (accept) {
            pos[t_arr[day]].erase(day + 1);
            pos[new_type].insert(day + 1);
            t_arr[day] = new_type;
            score += delta;
        }

        T *= alpha;
        if (T < T_min) T = T_min;
    }

    // ---------- Output ----------
    string out;
    out.reserve(D * 3);
    for (int d = 0; d < D; d++) {
        out += to_string(t_arr[d] + 1);
        out += '\n';
    }
    cout << out;
    return 0;
}