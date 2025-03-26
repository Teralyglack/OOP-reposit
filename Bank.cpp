#include "Bank.h"
#include "client.h"


void Offer::newsletter() {
	for (const auto& nslette : globalClients) {
		std::cout << "Client: " << nslette.first << ", Balance: " << message << std::endl;
	}

	//надо будет написать функцию, которая всем новым клиентам отправляет сообщение
}