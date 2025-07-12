#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<pair<ll, ll>> customers(n);
    for (ll i = 0; i < n; i++) {
        cin >> customers[i].first >> customers[i].second;
    }
    sort(customers.begin(), customers.end());
    ll ans = 0;
    ll last = 0;
    for (ll i = 0; i < n; i++) {
        if (customers[i].second >= last) {
            ans++;
            last = customers[i].second;
        }
        else {
            ans = max(ans, 1LL);
            last = customers[i].second;
        }
    }
    cout << ans << endl;
}
