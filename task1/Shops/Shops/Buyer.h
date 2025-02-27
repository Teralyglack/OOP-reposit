#pragma once
#include "Product.h"

class Buyer{
public:
	string name;
	int balance;
	string pr;
	int finalprice = 0;
	map<string, unsigned>productList;


	void Buy(const ProductInfo& productInfo) {};



};
