#include <bits/stdc++.h>
using namespace std;

int main() {
    // Prepare RNG
    default_random_engine generator(chrono::system_clock::now().time_since_epoch().count());
    normal_distribution<double> rating(2000.0, 600.0);
    normal_distribution<double> height(150.0, 10.0);

    // Prepare I/O
    freopen("G.dat", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0);

    vector<string> words({ "Kevin", "Robert", "Aiden", "Sayam", "Marina", "Andy", "Michael", "Samuel", "Jason", "Darren", "Anthony", "Billiam", "Bobert", "Samchooo", "unixkcd", "BigChonk", "xuxinwen" });

    const int N = 1e5;
    for (int i = 0; i < N; ++i) {
        if (i == 69420) cout << 4200.42 << ' ' << 111.111 << ' ' << "unixkcd" << '\n';
        else cout << rating(generator) << ' ' << height(generator) << ' ' << words[rand()%words.size()] << '\n';
    }
}
