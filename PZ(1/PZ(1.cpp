#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    system("color E1");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Прізвище
    string last_name;
    cout << "Введіть прізвище: ";
    getline(cin, last_name);

    // Ім'я
    string first_name;
    cout << "Введіть ім'я: ";
    getline(cin, first_name);

    // Вік
    int age;
    cout << "Введіть вік: ";
    cin >> age;

    // Очищення буфера після введення числа
    cin.ignore();

    // Нові запитання
    string city;
    cout << "Введіть місто, де ви живете: ";
    getline(cin, city);

    string subject;
    cout << "Введіть улюблений предмет: ";
    getline(cin, subject);

    string hobby;
    cout << "Введіть улюблене хобі: ";
    getline(cin, hobby);

    // Вивід введених даних
    cout << "\nВаші дані:" << endl;
    cout << "Прізвище: " << last_name << endl;
    cout << "Ім'я: " << first_name << endl;
    cout << "Вік: " << age << endl;
    cout << "Місто: " << city << endl;
    cout << "Улюблений предмет: " << subject << endl;
    cout << "Хобі: " << hobby << endl;

    return 0;
}
