//class type-casting

#include <iostream>
using namespace std;

class CDummy{
	float i, j;
};

class CAddition{
	int x, y;
public:
	CAddition(int a, int b){ x = a; y = b;}
	int result(){ return x+y;}
};

int main() {
	CDummy d;
	CAddition * padd;

	padd = (CAddition*) &d;
	cout << padd->result();

	return 0;
}

// This codme is meant not to work and produce a Run-Time Error