#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<ll, ll> mp;
    ll first = -1;
    ll sec = -1;
    for(ll i = 0; i < n; i++) {
        ll x = k-arr[i];
        if(mp.find(x)!=mp.end()){
            first = mp[x];
            sec = i;
            break;
        }
        mp[arr[i]] = i;
    }
    if(first == -1 || sec == -1) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << first + 1 << " " << sec + 1 << endl; // Convert to 1-based index
    }
    return 0;

}
