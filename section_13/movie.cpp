#pragma once
#include<cstring>
#include<string>
#include<iostream>
#include "movie.h"
using namespace std;
 
Movie::Movie(string title, string rating)
  :title{title}, rating{rating}{
  cout << "New movie object \"" << title << "\" created" << endl;
}
Movie::~Movie(){
  cout << "\"" << title << "\" destructed" << endl;
}

string Movie::getTitle(){
  return title;
}