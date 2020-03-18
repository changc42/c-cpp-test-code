#include<iostream>
#include<ctime>
using namespace std;

int main(){
  cout << "enter a number of cents" << endl;
  int input;
  cin >> input;

  int q=input/25;
  int remainder = input%25;
  int d= remainder/10;
  remainder %= 10;
  int n = remainder/5;
  remainder %= 5;
  int p = remainder;

  printf("here is your change:\n%d quarters\n%d dimes\n%d nickels\n%d pennies\n",q,d,n,p);

}