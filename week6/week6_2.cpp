#include<bits/stdc++.h>
using namespace std;


int main() {
  int n;
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

  queue<int> q;
  q.push(from);

  while (!q.empty()) {
    int u = q.front();
    q.pop();
    vis[u] = 1;

    for (int v : adj[u]) {
        if (!vis[v]) {
            q.push(v);
        }
    }
  }
  
  if (vis[to]) {
    cout << "Yes Path Exists";
  } else {
    cout << "No Such Path Exists";
  }
  return 0;
}