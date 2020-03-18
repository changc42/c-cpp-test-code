#include<iostream>
#include<string>
using namespace std;

void changeInt(int* num){
  *num =3;
}

int main(){
  int num = 5;
  cout << num << endl;
  changeInt(&num);
  cout << num << endl;
}