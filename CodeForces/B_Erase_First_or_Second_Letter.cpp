#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int f(unordered_set<string>& seen, ll index, string& s, ll n, ll& ans) {
    if (index == n) {
        if (seen.find(s) == seen.end()) {
            seen.insert(s);
            ans++;
        }
        return ans;
    }
    s.erase(index, 1); // Erase the character at index
    ll left = f(seen, index+1,s,n, ans);
    s.insert(index, 1, s[index]); // Restore the character at index
    f(seen, index+1, s, n, ans); // Skip the character at index
    ll right = f(seen, index+1, s, n, ans);
    s.erase(index, 1); // Erase the character at index again
    s.insert(index, 1, s[index]); // Restore the character at index again
    return left + right;

    
    
}

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    unordered_set<string> seen;
    cout << f(seen,0,s,n,ans);
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
