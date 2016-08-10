//more pointers

#include <iostream>

using namespace std;

int main(){

  int firstvalue = 5, secondvalue = 15;
  int * p1, * p2;

  p1 = &firstvalue; //p1 --> firstvalue (address)
  p2 = &secondvalue;//p2 --> secondvalue (address)

  *p1 = 10; //firstvalue = 10 through p1
  *p2 = *p1;//secondvalue = firstvalue through p1

  p1 = p2;//p2 --> secondvalue (address) <-- p1
  *p1 = 20;//secondvalue = 20 through p1

  cout << "firstvalue is " << firstvalue << endl;
  cout << "secondvalue is " << secondvalue << endl;

  return 0;

}
