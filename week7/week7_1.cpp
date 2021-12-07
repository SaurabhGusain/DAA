#include<bits/stdc++.h>
using namespace std;



int main() {
  int n;
  const int INF = 1e9;
  cin >> n;
  vector<vector<pair<int, int>>> adj(n + 1);
  int weight;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        cin >> weight;
        if (weight > 0) {
            adj[i].push_back(make_pair(j, weight));
        }
    }
  }

  int source;
  cin >> source;
  set<pair<int, int>> Q; // {dist, from}
  vector<bool> vis(n + 1);
  vector<int> dist(n + 1, INF);
  vector<int> parent(n + 1, -1);
  Q.insert({0, source});
  dist[source] = 0;
  parent[source] = source;

  while (!Q.empty()) {
    auto [d, u] = *Q.begin();
    Q.erase(Q.begin());

    if (vis[u]) continue;
    vis[u] = true;

    for (auto [v, w] : adj[u]) {
        if (dist[u] + w < dist[v]) {
            dist[v] = dist[u] + w;
            parent[v] = u;
            Q.insert({dist[v], v});
        }
    }
  }

  for (int i = 1; i <= n; i++) {
    if (dist[i] == INF) {
        cout << "No path\n";
    } else {
        int x = i;
        while (x != -1 && x != parent[x]) {
            cout << x << ' ';
            x = parent[x];
        }
        cout << source << ": " << dist[i] << '\n';
    }
  }

  return 0;
}