#include <bits/stdc++.h>
using namespace std;

using point = pair<pair<double, double>, string>;

int main() {
    ifstream cin("H.dat");
    ios_base::sync_with_stdio(0), cin.tie(0);

    vector<point> vc;
    for (int i = 0; i < 1e5; ++i) {
        double x, y; string s;
        cin >> x >> y >> s;
        vc.push_back({ { x, y }, s });
    }
    sort(begin(vc), end(vc), [](point a, point b) {
        return hypot(a.first.first-4200, a.first.second-4200) < hypot(b.first.first-4200, b.first.second-4200);
    });
    for (int i = 0; i < 11; ++i) {
        cout << vc[i].first.first << ' ' << vc[i].first.second << ' ' << vc[i].second << '\n';
    }
}
