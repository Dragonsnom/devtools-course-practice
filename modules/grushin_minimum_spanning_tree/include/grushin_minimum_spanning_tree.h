// Copyright 2022 Grushin Dmitriy
#ifndef MODULES_GRUSHIN_MINIMUM_SPANNING_TREE_INCLUDE_GRUSHIN_MINIMUM_SPANNING_TREE_H_
#define MODULES_GRUSHIN_MINIMUM_SPANNING_TREE_INCLUDE_GRUSHIN_MINIMUM_SPANNING_TREE_H_

#define edge pair<int, int>

#include <utility>
#include <iostream>
#include <vector>
#include <algorithm>

class Graph {
 private:
  std::vector<std::pair<int, std::edge>> G;
  std::vector<std::pair<int, std::edge>> T;
  int* parent;
  int V;
 public:
  explicit Graph(int V);
  void AddWeightedEdge(int u, int v, int w);
  int find_set(int i);
  int minimum();
  void union_set(int u, int v);
  void kruskal();
  void print();
};
#endif  // MODULES_GRUSHIN_MINIMUM_SPANNING_TREE_INCLUDE_GRUSHIN_MINIMUM_SPANNING_TREE_H_
