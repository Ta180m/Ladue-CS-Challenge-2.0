#include <bits/stdc++.h>
using namespace std;

int main() {
    // Prepare RNG
    default_random_engine generator(chrono::system_clock::now().time_since_epoch().count());
    normal_distribution<double> distribution(100.0, 15.0); // Totally not IQ

    // Prepare I/O
    freopen("D.dat", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0);

    vector<string> words({ "penguin", "gnu", "fox", "mouse", "coyote", "mule", "platypus", "squirrel", "monkey" });

    const int N = 1e6;
    for (int i = 0; i < N; ++i) {
        if (i == 54321) cout << 300 << ' ' << "300iq" << '\n';
        else cout << distribution(generator) << ' ' << words[rand()%words.size()] << '\n';
    }
}
