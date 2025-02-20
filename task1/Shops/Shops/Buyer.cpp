#include "Product.h"
class Buyer {
	string name;
	int id;
	int balance;
	map<Product, int>productList;

	Buyer() {
		cout << "Enter your name: ";
		cin >> name;

		cout << "Enter your id: ";
		cin >> id;

		cout << "Enter your balance: ";
		cin >> balance;
			
	}
};