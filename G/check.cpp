#include <bits/stdc++.h>
using namespace std;

using point = pair<pair<double, double>, string>;

int main() {
    ifstream cin("G.dat");
    ios_base::sync_with_stdio(0), cin.tie(0);

    vector<point> vc;
    for (int i = 0; i < 1e6; ++i) {
        double x, y; string s;
        cin >> x >> y >> s;
        vc.push_back({ { y, x }, s });
    }
    sort(begin(vc), end(vc));
    for (int i = 0; i < 11; ++i) {
        cout << vc[i].first.first << ' ' << vc[i].first.second << ' ' << vc[i].second << '\n';
    }
}