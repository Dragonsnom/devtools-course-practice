// Copyright 2022 Grushin Dmitriy

#include <gtest/gtest.h>
#include "include/grushin_minimum_spanning_tree.h"

TEST(Grushin_Dmitriy_minimum_spanning_tree, test_zero_value) {
  Graph g(0);
  g.kruskal();
  int answer = g.minimum();

  ASSERT_EQ(answer, 0);
}

TEST(Grushin_Dmitriy_minimum_spanning_tree, test_six_value) {
  Graph g(6);
  g.AddWeightedEdge(0, 1, 2);
  g.AddWeightedEdge(0, 2, 1);
  g.AddWeightedEdge(1, 3, 5);
  g.AddWeightedEdge(2, 3, 4);
  g.AddWeightedEdge(1, 2, 3);
  g.AddWeightedEdge(2, 4, 1);
  g.AddWeightedEdge(4, 5, 2);
  g.AddWeightedEdge(3, 5, 3);
  g.kruskal();

  int answer = g.minimum();

  ASSERT_EQ(answer, 9);
}

TEST(Grushin_Dmitriy_minimum_spanning_tree, test_six_difficult_value) {
  Graph g(6);
  g.AddWeightedEdge(0, 1, 4);
  g.AddWeightedEdge(0, 2, 4);
  g.AddWeightedEdge(1, 2, 2);
  g.AddWeightedEdge(1, 0, 4);
  g.AddWeightedEdge(2, 0, 4);
  g.AddWeightedEdge(2, 1, 2);
  g.AddWeightedEdge(2, 3, 3);
  g.AddWeightedEdge(2, 5, 2);
  g.AddWeightedEdge(2, 4, 4);
  g.AddWeightedEdge(3, 2, 3);
  g.AddWeightedEdge(3, 4, 3);
  g.AddWeightedEdge(4, 2, 4);
  g.AddWeightedEdge(4, 3, 3);
  g.AddWeightedEdge(5, 2, 2);
  g.AddWeightedEdge(5, 4, 3);
  g.kruskal();

  int answer = g.minimum();

  ASSERT_EQ(answer, 14);
}

TEST(Grushin_Dmitriy_minimum_spanning_tree, test_compound_test) {
  Graph g(6);
  g.AddWeightedEdge(0, 1, 2);
  g.AddWeightedEdge(0, 2, 1);
  g.AddWeightedEdge(1, 3, 5);
  g.AddWeightedEdge(2, 3, 4);
  g.AddWeightedEdge(1, 2, 3);
  g.AddWeightedEdge(2, 4, 1);
  g.AddWeightedEdge(4, 5, 2);
  g.AddWeightedEdge(3, 5, 3);
  g.AddWeightedEdge(2, 4, 4);
  g.AddWeightedEdge(3, 2, 3);
  g.AddWeightedEdge(3, 4, 3);
  g.AddWeightedEdge(4, 2, 4);
  g.AddWeightedEdge(4, 3, 3);
  g.AddWeightedEdge(5, 2, 2);
  g.AddWeightedEdge(5, 4, 3);
  g.kruskal();

  int answer = g.minimum();

  ASSERT_EQ(answer, 9);
}

TEST(Grushin_Dmitriy_minimum_spanning_tree, can_print) {
  Graph g(6);
  g.AddWeightedEdge(0, 1, 4);
  g.AddWeightedEdge(0, 2, 4);
  g.AddWeightedEdge(1, 2, 2);
  g.AddWeightedEdge(1, 0, 4);
  g.AddWeightedEdge(2, 0, 4);
  g.AddWeightedEdge(2, 1, 2);
  g.AddWeightedEdge(2, 3, 3);
  g.AddWeightedEdge(2, 5, 2);
  g.AddWeightedEdge(2, 4, 4);
  g.AddWeightedEdge(3, 2, 3);
  g.AddWeightedEdge(3, 4, 3);
  g.AddWeightedEdge(4, 2, 4);
  g.AddWeightedEdge(4, 3, 3);
  g.AddWeightedEdge(5, 2, 2);
  g.AddWeightedEdge(5, 4, 3);
  g.kruskal();

  ASSERT_NO_THROW(g.kruskal());
}
