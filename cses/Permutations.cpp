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
    if(n==3||n==2){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    if(n==1){
        cout << 1;
        return 0;
    }
    if(n==4){
        cout << 2 << " " << 4 << " " << 1 << " " << 3;
        return 0;
    }
    for(ll i=1; i<=n; i+=2){
        cout << i << " ";

    }
    for(ll i=2; i<=n; i+=2){
        cout << i << " ";
    }
    cout << endl;
    return 0;
    
    
    
    
    
}
