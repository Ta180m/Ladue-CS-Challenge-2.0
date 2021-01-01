#include <bits/stdc++.h>
using namespace std;

int main() {
    // Prepare RNG
    default_random_engine generator(chrono::system_clock::now().time_since_epoch().count());
    normal_distribution<double> distribution(0.0, 10000.0);

    // Prepare I/O
    freopen("F.dat", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0);

    const int N = 1e6;
    for (int i = 0; i < N; ++i) {
        cout << setprecision(12) << distribution(generator) << '\n';
    }
}
