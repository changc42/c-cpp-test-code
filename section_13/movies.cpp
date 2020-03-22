#pragma once
#include "movies.h"
#include "movie.cpp"
#include<vector>
#include<iostream>
using namespace std;

Movies::Movies(){
  cout << "Constructed a Movies object" << endl;
}
Movies::~Movies(){
  cout << "Destructed a Movies object" << endl;
}

void Movies::printCollection(){
  cout << "Collection of movies:" << endl;
  for(auto movie: collection){
    cout<<movie.getTitle() << endl;
  }
  cout << endl;
}

void Movies::add(string title, string rating){
  Movie movie = Movie(title,rating);
  collection.push_back(movie);
  cout << "added \"" << title << "\" to collection" << endl;
}