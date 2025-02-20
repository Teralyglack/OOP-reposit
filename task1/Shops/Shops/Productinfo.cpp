#include "Product.h"


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

int main() {
	ProductInfo productInfo;
	cout << "Количество элементов в map: " << productInfo.quantity();
	return 0;
}




