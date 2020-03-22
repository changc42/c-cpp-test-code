#include "movies.cpp"
#include "movie.cpp"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
  Movies movies = Movies();
  movies.add("Cats", "R");
  Movie avatar = Movie("Avatar", "R");
  movies.collection.push_back(avatar);
  movies.printCollection();



  cout << "End of main()" << endl;
  return 0;
}