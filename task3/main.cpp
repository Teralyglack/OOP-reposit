#include "client.h"
#include "Bank.h"


int main() {
	client clientList;
	clientList.newClient();
	clientList.displayClients();

	Offer newslett;
	newslett.newsletter();
	return 0;
}




