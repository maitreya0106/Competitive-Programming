#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    set<ll> dis;
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        dis.insert(x);
    }

    cout << dis.size() << endl;
}
