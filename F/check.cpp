#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("F.dat");
    ios_base::sync_with_stdio(0), cin.tie(0);

    vector<double> vc;
    for (int i = 0; i < 1e5; ++i) {
        double x;
        cin >> x;
        vc.push_back(x);
    }

    double ans = 1e9;
    sort(begin(vc), end(vc));
    for (int i = 0; i < vc.size()-1; ++i) {
        ans = min(vc[i+1]-vc[i], ans);
        if (vc[i] == vc[i+1]) cout << 1 << '\n';
    }
    cout << setprecision(12) << ans;
}