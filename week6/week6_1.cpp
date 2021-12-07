#include<bits/stdc++.h>
using namespace std;


int main() {
  int n;
  const int INF = 1e9;
  cin >> n;
  vector<vector<int>> G(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> G[i][j];
        if (i != j && G[i][j] == 0) {
            G[i][j] = 1e9;
        }
    }
  }
  
  // Applying Floyd Warshall Algorithm
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
        }
    }
  }

  int from, to;
  cin >> from >> to;
  --from, --to;

  if (G[from][to] < INF) {
    cout << "Yes Path Exists";
  } else {
    cout << "No Such Path Exists";
  }
  return 0;
}