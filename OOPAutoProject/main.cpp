#include "main.h"

class Auto {
public:
	string brand;
	string model;
	int number_of_sales;

	void clear() {
		brand = "no brand";
		model = "no model";
		number_of_sales = 0;
	}

	string convert() {
		string msg = "";
		msg += brand;
		msg += " " + model;
		msg += " (number of sales = " + to_string(number_of_sales);
		msg += ")";

		return msg;
	}

};

int main() {
	Auto a1;

	a1.brand = "BMW";
	a1.model = "X5";
	a1.number_of_sales = 10;

	cout << "Before: " << endl;
	cout << a1.convert() << endl;

	a1.clear();

	cout << "\nAfter: " << endl;
	cout << a1.convert() << endl;

	return 0;
}