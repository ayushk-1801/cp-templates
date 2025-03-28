// Use a safe int max value instead of a floating point constant
const int INF = numeric_limits<int>::max();

/**
 * Dijkstra's algorithm using priority queue
 * @param s Source vertex
 * @param adj Adjacency list representation of graph
 * @param d Distance array (output)
 * @param p Predecessor array (output)
 */
void dijkstra(int s, const vector<vector<pair<int, int>>> &adj,
                 vector<int> &d, vector<int> &p) {
  int n = adj.size();
  d.assign(n, INF);
  p.assign(n, -1);

  d[s] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;
  pq.push({0, s});

  while (!pq.empty()) {
    int v = pq.top().second;
    int d_v = pq.top().first;
    pq.pop();

    if (d_v > d[v])
      continue;

    for (auto edge : adj[v]) {
      int to = edge.first;
      int len = edge.second;

      if (d[v] + len < d[to]) {
        d[to] = d[v] + len;
        p[to] = v;
        pq.push({d[to], to});
      }
    }
  }
}

/**
 * Reconstruct path from source s to target t
 * @param s Source vertex
 * @param t Target vertex
 * @param p Predecessor array
 * @return Vector containing the path from s to t
 */
vector<int> reconstruct_path(int s, int t, const vector<int> &p) {
  vector<int> path;

  for (int v = t; v != s; v = p[v]) {
    if (v == -1)
      return {}; // No path exists
    path.push_back(v);
  }
  path.push_back(s);

  reverse(path.begin(), path.end());
  return path;
}
