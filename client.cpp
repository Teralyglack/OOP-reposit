#include "client.h"
#include "count.h"

map<string, int> globalClients;
void client::newClient() {

    while (true) {
        cout << "Enter new client (or type 'break' to exit): ";
        cin >> name;
        if (name == "break") {
            break; // Выход из цикла, если введено "break"
        }
        cout << "Enter client count: ";
        cin >> countClient;

        // Сохраняем информацию о клиенте в векторе
        globalClients.insert(make_pair(name,  countClient));

    }
}

void client::clientList() {
    for (const auto& pair : globalClients) {
        std::cout << "Client: " << pair.first << ", Balance: " << pair.second << std::endl;
    }
}


