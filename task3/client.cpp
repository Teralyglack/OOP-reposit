#include "client.h"



void client::newClient() {

    while (true) {
        cout << "Enter new client (or type 'break' to exit): ";
        cin >> name;
        if (name == "break") {
            break; // Выход из цикла, если введено "break"
        }
        cout << "Enter client surname: ";
        cin >> surname;
        cout << "Enter client numberphone: ";
        cin >> numberphone;

        // Сохраняем информацию о клиенте в векторе
        globalClients.emplace_back(name + " " + surname + " " + to_string(numberphone));
    }
}

void client::displayClients() {
    cout << "Client list:" << endl;
    for (string client :  globalClients) {
        cout << client << endl;
    }
}
