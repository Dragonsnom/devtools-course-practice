// Copyright 2022 Grushin Dmitriy
#ifndef MODULES_GRUSHIN_DMITRIY_MINIMUM_SPANNING_TREE_H_
#define MODULES_GRUSHIN_DMITRIY_MINIMUM_SPANNING_TREE_H_
#define edge pair<int,int>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

class Graph {
private:
  std::vector<pair<int, edge>> G; // graph
  std::vector<pair<int, edge>> T; // mst
  int* parent;
  int V; // number of vertices/nodes in graph
public:
  Graph(int V);
  void AddWeightedEdge(int u, int v, int w);
  int find_set(int i);
  int minimum();
  void union_set(int u, int v);
  void kruskal();
  void print();
};


#endif  // MODULES_GRUSHIN_DMITRIY_MINIMUM_SPANNING_TREE_H_
