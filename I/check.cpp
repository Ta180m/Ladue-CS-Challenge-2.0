#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("I.dat");
    ios_base::sync_with_stdio(0), cin.tie(0);

    vector<pair<double, double>> vc;
    for (int i = 0; i < 1e5; ++i) {
        double x, y;
        cin >> x >> y;
        vc.push_back({ x, y });
    }

    double ans = 1e9;
    for (int i = 0; i < vc.size(); ++i) {
        if (i % 1000 == 0) cout << i << endl;
        for (int j = i+1; j < vc.size(); ++j) {
            ans = min(hypot(vc[i].first-vc[j].first, vc[i].second-vc[j].second), ans);
        }
    }
    cout << setprecision(12) << ans;
}