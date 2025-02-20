#pragma once
#include "Product.h"
class Buyer {
	string name;
	int id;
	int balance;
	map<Product, int>productList;
};

