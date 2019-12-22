#include <iostream>

using namespace std;

void showData(int* array, size_t size) {
	for (size_t count = 0; count < size; count++) {
		cout << count + 1 << " element " << &array[count] << endl;
	}
}

void showdbData(int** array, size_t size) {
	for (size_t count = 0; count < size; count++) {
		for (size_t count2 = 0; count2 < size; count2++) {
			cout << count + 1  << " " << count2 + 1 << " element " << &array[count][count2] << endl;
		}
	}
}

int main() {
	
	int stArray[5];

	int stDbArray[5][5];

	size_t size = 5;
	int* dyArray = new int[size];

	int** dyDbArray = new int* [size];
	for (size_t count = 0; count < size; count++) {
			dyDbArray[count] = new int[size];
	}

	cout << "Static array 1: " << endl;
	showData(stArray, size);
	cout << "Static double array 1: " << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << i + 1 << " element " << &stDbArray[i][j] << endl;
		}
	}
	cout << "Dynamic array 1: " << endl;
	showData(dyArray, size);
	cout << "Double dynamic array 1: " << endl;
	showdbData(dyDbArray, size);

	delete[] dyArray;
	for (size_t count = 0; count < size; count++) {
		delete dyDbArray[count];
	}
	delete[] dyDbArray;
	
}