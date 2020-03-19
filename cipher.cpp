#include<iostream>
#include<ctime>
#include<vector>
#include<cstring>
#include<string>
// #include<stdio.h>
using namespace std;

int main(){
  string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
  string key{"UVWXYZlmnoabcdefghijkQRSTpqrstuvwx yzABCDEFGHIJKLMNOP"};

  cout << "enter a message" << endl;
  string input{};
  getline(cin, input);

  cout << "your input is" << input << endl;

  string encrypted{};
  for(int i=0; i<input.length(); i++){
    encrypted+= key[alphabet.find(input[i])];
  }
  cout << "your encrypted string is: " << encrypted << endl;

  string decrypted{};
  for(int i=0; i<encrypted.length(); i++){
    decrypted+= alphabet[key.find(encrypted[i])];
  }
  cout << "your decrypted string is: " << decrypted << endl;
}