#pragma once
#include<cstring>
#include<string>
#include<iostream>
#include "movie.h"
using namespace std;
 
Movie::Movie(string title, string rating)
  :title{title}, rating{rating}, watchCounter{0}{
  cout << "New movie object \"" << title << "\" at ( " << this << ") created" << endl;
}
Movie::Movie(const Movie &source)
  :title{source.title}, rating{source.rating}, watchCounter{source.watchCounter}{
    cout << "Copy of (" << source.title << ", " << &source << ") created at (" << this << ")" << endl;
}
Movie::~Movie(){
  // cout << "\"" << title << "\" at ( " << this << ") destructed" << endl;
}

string Movie::getTitle(){
  return title;
}

void Movie::incrementWatchCounter(){
  watchCounter++;
}

int Movie::getWatchCount(){
  return watchCounter;
}