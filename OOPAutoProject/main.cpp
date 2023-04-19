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

	//default constructor
	Auto() {
		cout << "default constructor" << endl;

		brand = "no brand";
		model = "no model";
		number_of_sales = 1;
	}

	// constructor with arguments
	Auto(string br, string mod, int num) {
		
		cout << "constructor with arguments" << endl;

		brand = br;
		model = mod;
		number_of_sales = num;
	}

	Auto(string br, string mod) {
		brand = br;
		model = mod;
	}
	
	// copy-constructor
	Auto(const Auto &au) {
		cout << "copy-constructor" << endl;

		brand = au.brand;
		model = au.model;
		number_of_sales = au.number_of_sales;
	}

	//destructor
	~Auto() {
		cout << "destructor" << endl;
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

Auto test(){
	Auto au;
	return au;
}

int main() {
	Auto a1("BMW", "X5", 10);

	Auto au = test();
	cout << au.convert() << endl;

	return 0;
}