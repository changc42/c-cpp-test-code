#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#include<numeric>
using namespace std;

void print(vector<int> list){
  if(list.size()==0) cout << "list is empty" << endl;
  else{
    cout << "list contents: ";
    for(auto c: list) cout << c << " ";
  }
  cout << endl;
}

void append(vector<int> &list){
  int temp{};
  cout << "what number would you like to add to the list?" << endl;
  cin >> temp;
  list.push_back(temp);
  cout << "added: " << temp << endl;
}

void getAvg(vector<int> list){
  float avg = (float)accumulate(list.begin(),list.end(), 0)/list.size();
  cout << "the average is: " << avg << endl;
}

void getMin(vector<int> list){
  int min=*min_element(list.begin(), list.end());
  cout << "min is: " << min << endl;
}

void getMax(vector<int> list){
  int max = *max_element(list.begin(),list.end());
  cout << "max is: " << max << endl;
}

int main(){
  cout << "Welcome to the command prompt calculator! You start off with an empty list." << endl;
  cout << "Here are your options:" << endl;
  cout << "P: print the list" << endl;
  cout << "A: add a number to the list" << endl;
  cout << "M: print the average of the list" << endl;
  cout << "s: print the min" << endl;
  cout << "L: print the max" << endl;

  vector<int> list{};

  char input{};

  while(tolower(input)!='q'){
    cout << "\nWhat do you want to do >>" ;
    cin >> input;
    switch(tolower(input)){
      case 'p':
        print(list);
        break;
      case 'a':{
        append(list);
        break;
      }
      case 'm':{
        getAvg(list);
        break;
      }
      case 's':{
        getMin(list);
        break;
      }
      case 'l':{
        getMax(list);
        break;
      }
      case 'q': return 0;
      default: cout << "invalid input. try again" << endl;
    }
  }
}