#include <iostream>

using namespace std;

struct firstunlignedHotel { 
	char name[32]; 
	int floars; 
	bool lift; 
	int stars;
}; 

struct secondunlignedHotel {
	int floars;
	int stars;
	bool lift;
	char name[32];
};

#pragma pack(push, 1) 

struct firstlignedHotel {
	char name[32]; 
	int floars;
	bool lift;
	int stars;
};

struct secondlignedHotel {
	int floars;
	int stars;
	bool lift;
	char name[32];
};

#pragma pack(pop)

int main() {

	firstunlignedHotel unlHotel;
	secondunlignedHotel unlHotel2;
	firstlignedHotel lHotel;
	secondlignedHotel lHotel2;

	cout << "Unligned struct Hotel: " << endl
		<< "Adress of Fields: " << endl
		<< "char[32] name: " << &unlHotel.name << " int floars: " << &unlHotel.floars << " bool lift: " << &unlHotel.lift << " int stars: " << &unlHotel.stars << endl
		<< "Size of struct: " << sizeof(firstunlignedHotel) << endl
		<< "Size of fields: " << sizeof(unlHotel.name) << " " << sizeof(unlHotel.floars) << " " << sizeof(unlHotel.lift) << " " << sizeof(unlHotel.stars) << endl
		<< "Summ of sizeof fields: " << sizeof(unlHotel.name) + sizeof(unlHotel.floars) + sizeof(unlHotel.lift) + sizeof(unlHotel.stars) << endl
	    << "Size of object of struct: " << sizeof(unlHotel) << endl;

	cout << "Unligned struct Hotel with another order: " << endl
		<< "Fields: " << endl
		<< "char[32] name: " << &unlHotel2.name << " int floars: " << &unlHotel2.floars << " bool lift: " << &unlHotel2.lift << " int stars: " << &unlHotel2.stars << endl
		<< "Size of struct: " << sizeof(secondunlignedHotel) << endl
		<< "Size of fields: " << sizeof(unlHotel2.name) << " " << sizeof(unlHotel2.floars) << " " << sizeof(unlHotel2.lift) << " " << sizeof(unlHotel2.stars) << endl
		<< "Summ of sizeof fields: " << sizeof(unlHotel2.name) + sizeof(unlHotel2.floars) + sizeof(unlHotel2.lift) + sizeof(unlHotel2.stars) << endl
		<< "Size of object of struct: " << sizeof(unlHotel2) << endl;

	cout << "Ligned struct Hotel: " << endl
		<< "Fields: " << endl
		<< "char[32] name: " << &lHotel.name << " int floars: " << &lHotel.floars << " bool lift: " << &lHotel.lift << " int stars: " << &lHotel.stars << endl
		<< "Size of struct: " << sizeof(firstlignedHotel) << endl
		<< "Size of fields: " << sizeof(lHotel.name) << " " << sizeof(lHotel.floars) << " " << sizeof(lHotel.lift) << " " << sizeof(lHotel.stars) << endl
		<< "Summ of sizeof fields: " << sizeof(lHotel.name) + sizeof(lHotel.floars) + sizeof(lHotel.lift) + sizeof(lHotel.stars) << endl
		<< "Size of object of struct: " << sizeof(lHotel) << endl;

	cout << "Ligned struct Hotel with another order: " << endl
		<< "Fields: " << endl
		<< "char[32] name: " << &lHotel2.name << " int floars: " << &lHotel2.floars << " bool lift: " << &lHotel2.lift << " int stars: " << &lHotel2.stars << endl
		<< "Size of struct: " << sizeof(secondlignedHotel) << endl
		<< "Size of fields: " << sizeof(lHotel2.name) << " " << sizeof(lHotel2.floars) << " " << sizeof(lHotel2.lift) << " " << sizeof(lHotel2.stars) << endl
		<< "Summ of sizeof fields: " << sizeof(lHotel2.name) + sizeof(lHotel2.floars) + sizeof(lHotel2.lift) + sizeof(lHotel2.stars) << endl
		<< "Size of object of struct: " << sizeof(lHotel2) << endl;

	return 0;
}