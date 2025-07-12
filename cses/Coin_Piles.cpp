#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        if((a+b)%3!=0){
            cout << "NO" << endl;
            continue;
        }
        ll t1 = min(a,b);
        ll t2 = max(a,b);
        if(t2>t1*2){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;

    }
    

    
}
