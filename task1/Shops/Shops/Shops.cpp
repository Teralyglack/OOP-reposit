#include "Product.h"
#include "ProductInfo.h"
int main() {
	ProductInfo productInfo;
	cout << productInfo.quantity();
	return 0;

	ProductInfo productInfo;
	//cout << "Number of elements in map: " << productInfo.quantity() << endl;

	Buyer buyerr;
	buyerr.Buy(productInfo); // Передаем productInfo

	return 0;
}