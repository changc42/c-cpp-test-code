#pragma once
#include "movies.h"
#include "movie.cpp"
#include<vector>
#include<iostream>
using namespace std;

Movies::Movies()
  :Movies{"default"}{
}

Movies::Movies(string name)
  :name{name}{
  cout << "Constructed a Movies object with name: " << name << endl;
}
Movies::~Movies(){
  // cout << "Destructed a Movies object" << endl;
}

void Movies::printCollection(){
  cout << "Collection of movies:" << endl;
  for(auto movie: collection){
    cout<<movie.getTitle() << ": Watched " << movie.getWatchCount() << " time(s)" << endl;
  }
  cout << endl;
}

bool Movies::add(string title, string rating){
  for(auto movie: collection){
    if(movie.getTitle()==title){
      cout << "Cannot add. The movie \"" << title << "\" already exists in this collection" << endl;
      return false;
    }
  }
  Movie movie = Movie(title,rating);
  collection.push_back(movie);
  cout << "added \"" << title << "\" to collection" << endl;
  return true;
}

bool Movies::watch(string title){
  for(auto movie: collection){
    if(movie.getTitle()==title){
      movie.incrementWatchCounter();
      cout << "\"" << movie.getTitle() << "\" was watched!" << endl;
      return true;
    }
  }
  cout << "Movie \"" << title << "\" does not exist in this collection" << endl;
  return false;
}