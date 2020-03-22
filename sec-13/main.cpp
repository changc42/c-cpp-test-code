#include "movies.cpp"
#include "movie.cpp"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void foo(int& num){
  cout << "foo" << endl;
}

int main(){
  Movies movies;
  movies.add("Cats", "R");
  movies.add("Cats", "R");
  movies.add("Avatar","PG-13");
  movies.printCollection();
  movies.watch("Avatar");
  movies.watch("The Godfather");
  movies.printCollection();



  cout << "End of main()" << endl;
  return 0;
}