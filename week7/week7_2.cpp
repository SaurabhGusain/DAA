#include<bits/stdc++.h>
using namespace std;



int main() {
  int n;
  const int INF = 1e9;
  cin >> n;
  vector<vector<int>> edges;
  int weight;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        cin >> weight;
        if (weight > 0) {
            edges.push_back({i, j, weight});
        }
    }
  }
  int m = (int) edges.size();
  int source;
  cin >> source;
  vector<int> dist(n + 1, INF);
  vector<int> parent(n + 1, -1);
  dist[source] = 0;
  parent[source] = source;

  for (int i = 1; i <= n; i++) {
    for (auto e : edges) {
        int u = e[0], v = e[1], w = e[2];
        if (dist[u] + w < dist[v]) {
            dist[v] = dist[u] + w;
            parent[v] = u;
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