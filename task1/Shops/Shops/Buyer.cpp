#include "Product.h"
#include "Productinfo.h"
#include "Buyer.h"
using namespace std;

void Buyer::Buy(const ProductInfo& productInfo) {
		cout << "Enter your name: ";
		cin >> name;

		cout << "Enter your balance: ";
		cin >> balance;

		productList = productInfo.productList;

		cout << "Содержимое myMap:" << endl;


		while (true) {
			cout << "select products from the list (or 'break' to finish): " << endl;
			cin >> pr;

			if (pr == "break") {
				break;
			}

			if (productList.count(pr)) {
				finalprice += productList[pr];
			}
			else {
				cout << "Sorry, your product is not listed" << endl;
			}

		}
		cout << "final price: " << finalprice << endl;

		if (balance < finalprice) {
			cout << "Sorry, you can't make a purchase, you don't have enough funds";
		}
		else {
			cout << "you have made a purchase!";
		}

	};

