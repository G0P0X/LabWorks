#include <iostream>

using namespace std;

int globalvar1;
int globalvar2;

int main(){
	int autovar1;
	int autovar2;

	int* dynamicvar1 = new int;
	int* dynamicvar2 = new int;

	cout << "Global var 1: " << &globalvar1 << " " << "Global var 2: " << &globalvar2 << endl
		<< "Auto var 1: " << &autovar1 << " " << "Auto var 2: " << &autovar2 << endl
		<< "Dynamic var 1: " << dynamicvar1 << " " << "Dynamic var 2: " << dynamicvar2 << endl;

	delete dynamicvar1;
	delete dynamicvar2;
	
	return 0;
}