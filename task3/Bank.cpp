#include "Bank.h"
#include "client.h"

void Offer::newsletter() {
	for (const auto& nsletter : globalClients) {
		cout << message << endl;
	}
	//надо будет написать функцию, которая всем новым клиентам отправляет сообщение
}