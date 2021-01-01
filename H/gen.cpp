#include <bits/stdc++.h>
using namespace std;

int main() {
    // Prepare RNG
    default_random_engine generator(chrono::system_clock::now().time_since_epoch().count());
    normal_distribution<double> distribution(5000.0, 1000.0);

    // Prepare I/O
    freopen("H.dat", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0);

    vector<string> words({ "penguin", "gnu", "fox", "mouse", "coyote", "mule", "platypus", "squirrel", "monkey" });

    const int N = 1e5;
    for (int i = 0; i < N; ++i) {
        if (i % 20000 == 10000) cout << 4200.0+(rand()%30)-15 << ' ' << 4200.0+(rand()%30)-15 << ' ' << "platypus" << '\n';
        else cout << distribution(generator) << ' ' << distribution(generator) << ' ' << words[rand()%words.size()] << '\n';
    }
}
