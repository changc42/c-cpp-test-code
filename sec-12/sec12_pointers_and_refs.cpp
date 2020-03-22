#include<iostream>
using namespace std;

void print(const int *const intArr, size_t size){
  for(size_t i=0; i<size; i++){
    cout << intArr[i] << " ";
  }
  cout << endl;
}

int* cross_product(int arr1[], int arr2[], size_t size1, size_t size2){
  int* result = new int[size1*size2];
  for(size_t i=0; i<size2; i++){
    for(size_t j=0; j<size1; j++){
      result[i*size1 + j]=arr2[i]*arr1[j];
    }
  }
  return result;
}

int main(){
  const size_t size1=5;
  const size_t size2=3;
  int arr1[size1]{1,2,3,4,5};
  int arr2[size2]{10,20,30};

  int* result = cross_product(arr1, arr2, size1, size2);
  print(result, size1*size2);
  delete [] result;
  return 0;
}