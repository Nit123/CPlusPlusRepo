// cin with strings

#include <iostream>
#include <string>

using namespace std;

int main(){
  
  string name;
  string team;
  
  cout << "What's your name? ";
  getline(cin, name);
  cout << "Hello " << name << "." << endl;

  cout << "What is your favorite team? ";
  getline(cin, team);
  cout << "I like " << team << " too!" << endl;
  

  return 0;

}
