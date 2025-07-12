#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count = 0;
    while (n >= 5) {
        count += n / 5;
        n /= 5;
    }

    cout << count << "\n";
}
