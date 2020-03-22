#pragma once
#include "movie.cpp"
#include<vector>
#include<iostream>
#include<string>
using namespace std;

class Movies{
  private:

    string name;
    vector<Movie> collection;
  public:
    Movies();
    Movies(string name);
    ~Movies();

    void printCollection();
    bool add(string title, string rating);
    bool watch(string title);
};