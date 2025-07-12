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



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> arr(n+1,0);
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        arr[x]=1;
    }
    for(ll i=1; i<=n; i++){
        if(arr[i]==0){
            cout << i << endl;
            return 0;
        }
    }
}
