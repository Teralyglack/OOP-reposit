#pragma once
#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;


class client {
public:
	string name;
	int numberClient;
	void newClient();

	void clientList();
};

extern map<string, int> globalClients;



