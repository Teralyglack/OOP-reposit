#pragma once
#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;


class client {
public:
	string name;
	string surname;
	int numberphone;

	void newClient();
	void displayClients();
};

extern vector<string> globalClients;



