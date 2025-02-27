#pragma once
#include "Product.h"
class ProductInfo {
public:
	map<string, unsigned>productList;
	ProductInfo() {};

	int quantity() {
		return productList.size();
	}
};
