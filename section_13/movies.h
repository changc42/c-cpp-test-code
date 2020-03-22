#pragma once
#include "movie.cpp"
#include<vector>
#include<iostream>
using namespace std;

class Movies{
  public:

    vector<Movie> collection;
  public:
    Movies();
    ~Movies();

    void printCollection();
    void add(string title, string rating);
};