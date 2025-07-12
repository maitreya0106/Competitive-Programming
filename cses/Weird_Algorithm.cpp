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
    ll n;
    cin >> n;
    cout << n << " ";
    while(n!=1){
        if(n%2==0){
            n/=2;
            cout << n << " ";
        }
        else{
            n = 3*n + 1;
            cout << n << " ";
        }
    }
    cout << endl;
}
