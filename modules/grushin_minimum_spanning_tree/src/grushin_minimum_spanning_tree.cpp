// Copyright 2022 Grushin Dmitriy

#include<vector>
#include<algorithm>
#include "include/grushin_minimum_spanning_tree.h"

Graph::Graph(int V) {
  parent = new int[V];

  for (int i = 0; i < V; i++)
    parent[i] = i;

  G.clear();
  T.clear();
}
void Graph::AddWeightedEdge(int u, int v, int w) {
  G.push_back(std::make_pair(w, std::edge(u, v)));
}
int Graph::find_set(int i) {
  // If i is the parent of itself
  if (i == parent[i])
    return i;
  else
    return find_set(parent[i]);
}

int Graph::minimum() {

  if (T.size() == 0) {
    return 0;
  }

  else {
    int minimum_size = 0;
    for (int i = 0; i < T.size(); i++) {
      minimum_size += T[i].first;
    }

    return minimum_size;
  }
}

void Graph::union_set(int u, int v) {
  parent[u] = parent[v];
}
void Graph::kruskal() {
  int i, uRep, vRep;
  sort(G.begin(), G.end()); 
  for (i = 0; i < G.size(); i++) {
    uRep = find_set(G[i].second.first);
    vRep = find_set(G[i].second.second);
    if (uRep != vRep) {
      T.push_back(G[i]);
      union_set(uRep, vRep);
    }
  }
}
void Graph::print() {
  std::cout << "Edge :" << " Weight" << std::endl;
  for (int i = 0; i < T.size(); i++) {
    std::cout << T[i].second.first << " - " << T[i].second.second << " : "
      << T[i].first;
    std::cout << std::endl;
  }
}
