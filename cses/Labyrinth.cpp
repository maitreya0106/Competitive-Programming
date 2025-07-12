#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    vector<vector<char>> arr(n, vector<char>(m));
    vector<vector<ll>> vis(n, vector<ll>(m, 0));
    vector<vector<pair<ll, ll>>> parent(n, vector<pair<ll, ll>>(m, {-1, -1}));
    vector<vector<char>> move(n, vector<char>(m));

    queue<pair<ll, ll>> q;
    pair<ll, ll> start, end;

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 'A') {
                start = {i, j};
            }
            if(arr[i][j] == 'B') {
                end = {i, j};
            }
        }
    }

    q.push(start);
    vis[start.first][start.second] = 1;

    ll dx[4] = {1, -1, 0, 0};
    ll dy[4] = {0, 0, 1, -1};
    char dirChar[4] = {'D', 'U', 'R', 'L'};

    while(!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if(arr[x][y] == 'B') break;

        for(ll i = 0; i < 4; i++) {
            ll nx = x + dx[i];
            ll ny = y + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny] != '#' && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                q.push({nx, ny});
                parent[nx][ny] = {x, y};
                move[nx][ny] = dirChar[i];
            }
        }
    }

    if(vis[end.first][end.second] == 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        string path = "";
        pair<ll, ll> cur = end;
        while(cur != start) {
            char step = move[cur.first][cur.second];
            path += step;
            cur = parent[cur.first][cur.second];
        }
        reverse(path.begin(), path.end());
        cout << path.size() << "\n";
        cout << path << "\n";
    }
}
