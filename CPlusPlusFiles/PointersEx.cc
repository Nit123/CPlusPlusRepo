//my first pointer

#include <iostream>

using namespace std;

int main(){

  int firstvalue, secondvalue;
  int * mypointer;

  mypointer = &firstvalue; //mypointer points to the "address" of firstvalue
  *mypointer = 10; //firstvalue (which is pointed by mypointer) equals 10
  
  mypointer = &secondvalue; //mypointer points to the "address" of secondvalue
  *mypointer = 20; //secondvalue (which is pointed by mypointer) equals 20

  cout << "firstvalue is " << firstvalue << endl;
  cout << "secondvalue is " << secondvalue << endl;

  return 0;

}
