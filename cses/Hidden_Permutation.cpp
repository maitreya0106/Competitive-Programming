#include <bits/stdc++.h>
using namespace std;

int ask(int i, int j) {
    cout << "? " << i << " " << j << endl;
    cout.flush();
    string res;
    cin >> res;
    return res == "YES";  // returns true if a[i] < a[j]
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> order = {1};  // Start with index 1

    for (int i = 2; i <= n; i++) {
        int left = 0, right = order.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (ask(i, order[mid])) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        order.insert(order.begin() + left, i);
    }

    vector<int> ans(n + 1);  // 1-based
    for (int i = 0; i < n; i++) {
        ans[order[i]] = i + 1;
    }

    cout << "! ";
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    cout.flush();

    return 0;
}
