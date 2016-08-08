// subtraction function

#include <iostream>
using namespace std;

int subtraction(int a, int b){

  int r;
  r = a -b;
  return (r);
}

int main() {

  int x = 5;
  int y = 3;
  int z;

  z = subtraction(7,2);

  cout << "The variable result is " << z << endl;
  cout << "The direct result is " << subtraction(7,2) << endl;
  cout << "The second result is " << subtraction(x,y) << endl;
  z = 4 + subtraction(x,y);
  cout << "The second result added to 4 is " << z << endl;

  return 0;

}
