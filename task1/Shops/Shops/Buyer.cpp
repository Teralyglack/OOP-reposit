#include "Product.h"
using namespace std;
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class ProductInfo {
public:
	map<string, unsigned>productList;
	ProductInfo() {
		productList["cake"] = 30;
		productList["milk"] = 80;
		productList["apple"] = 60;
		productList["yougurt"] = 70;
		productList["banana"] = 75;
		productList["bread"] = 65;
		productList["candes"] = 50;
		productList["cheese"] = 90;

	}
	int quantity() {
		return productList.size();
	}
};


class Buyer {
public:
	string name;
	int id;
	int balance;
	string pr;
	int finalprice = 0;
	map<string, unsigned>productList;

	void Buy() {
		cout << "Enter your name: ";
		cin >> name;

		cout << "Enter your id: ";
		cin >> id;

		cout << "Enter your balance: ";
		cin >> balance;

		productList = productInfo.productList;

		while (true) {
			cout << "select products from the list (or 'break' to finish): " << endl;
			cin >> pr;

			if (pr == "break") {
				break;
			}

			if (productList.count(pr)) {
				finalprice += productList[pr];
				cout << "Summ: " << finalprice << endl;
			}
			else {
				cout << "Sorry, your product is not listed" << endl;
			}
		}
	}
};

int main() {
	ProductInfo productInfo;
	cout << "Количество элементов в map: " << productInfo.quantity() << endl;


	Buyer buyerr;
	buyerr.Buy();

	return 0;
}