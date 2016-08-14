//more pointers

#include <iostream>

using namespace std;

int main(){

  int numbers[5];
  int * p;

  p = numbers; //p referes to the numbers array
  *p = 10; //the reference of p = 10 (numbers[0])

  p++; // p refers to numbers[1]
  *p = 20; // numbers[1] = 20
  
  p = &numbers[2]; //p refers to numbers[2]
  *p = 30; //numbers[2] = 30

  p = numbers + 3; // p refers to numbers[3]
  *p = 40; //numbers[3] = 40

  p = numbers; //p refers to numbers[0]
  *(p+4) = 50; //numbers[0+4] = 50

  for(int n = 0; n < 5; n++)
    cout << numbers[n] << ", ";

  return 0;

}
