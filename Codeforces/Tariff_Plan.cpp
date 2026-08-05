#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        int N;
        cin >> N;

        int mile = 0, juice = 0;

        for (int i = 0; i < N; i++) {
            int d;
            cin >> d;

            mile += (d / 30 + 1) * 10;
            juice += (d / 60 + 1) * 15;
        }

        cout << "Case " << tc << ": ";

        if (mile < juice)
            cout << "Mile " << mile;
        else if (juice < mile)
            cout << "Juice " << juice;
        else
            cout << "Mile Juice " << mile;

        cout << '\n';
    }

    return 0;
}