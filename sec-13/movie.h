#pragma once
#include<cstring>
#include<string>
using namespace std;

class Movie{
  private:

    string title;
    string rating;
    int watchCounter;

  public:

    Movie(string title, string rating);
    Movie(const Movie &m);
    // Movie(Movie &&m);
    ~Movie();

    string getTitle();
    void incrementWatchCounter();
    int getWatchCount();

};