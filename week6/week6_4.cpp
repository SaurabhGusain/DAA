#include<bits/stdc++.h>
using namespace std;


bool dfs(int u, vector<vector<int>>& adj, vector<bool>& vis, vector<char>& color) {
    // dfs to check if it graph is bipartite
    for (int v : adj[u]) {
        if (!vis[v]) {
            vis[v] = 1;
            color[v] = color[u] ^ 'R' ^ 'G'; // set opposite color

            if (!dfs(v, adj, vis, color)) {
                return false;
            }
        } else if (color[u] == color[v]) {
            // if two adjacent visited nodes have same color then it is bipartite
            return false; 
        }
    }
    return true;
}

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

  // assuming it is a connected graph
  
  vector<char> color(n);
  color[0] = 'R';
  vis[0] = 1;

  if (dfs(0, adj, vis, color)) {
    cout << "Bipartite";
  } else {
    cout << "Not Bipartite";
  }
  return 0;
}