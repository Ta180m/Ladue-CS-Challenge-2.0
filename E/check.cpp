#include <bits/stdc++.h>
using namespace std;

using point = pair<double, string>;

int main() {
    ifstream cin("E.dat");
    ios_base::sync_with_stdio(0), cin.tie(0);

    vector<point> vc;
    for (int i = 0; i < 1e5; ++i) {
        double x; string s;
        cin >> x >> s;
        vc.emplace_back(x, s);
    }
    sort(begin(vc), end(vc), [](point a, point b) {
        return abs(a.first-1729) < abs(b.first-1729);
    });
    for (int i = 0; i < 11; ++i) {
        cout << vc[i].first << ' ' << vc[i].second << '\n';
    }
}
