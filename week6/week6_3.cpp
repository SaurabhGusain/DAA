#include<bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>>& adj, vector<bool>& vis) {
    vis[u] = 1;
    for (int v : adj[u]) {
        if (!vis[v]) {
            dfs(v, adj, vis);
        }
    }
}

int main() {
  int n;
  const int INF = 1e9;
  cin >> n;
  vector<vector<int>> adj(n);
  vector<bool> vis(n);
  bool has_edge;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> has_edge;
        if (has_edge) {
            adj[i].push_back(j);
        }
    }
  }

  int from, to;
  cin >> from >> to;
  --from, --to;

  dfs(from, adj, vis);
  
  if (vis[to]) {
    cout << "Yes Path Exists";
  } else {
    cout << "No Such Path Exists";
  }
  return 0;
}