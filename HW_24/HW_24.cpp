#include <iostream>
#include <string>
using namespace std;

bool z2(string str) {
	for (int i = 0; i < str.size(); i++)
		if (str[i] != str[str.size() - i - 1])
			return false;
	return true;
}

int z3(string str) {
	int sum = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?')
			sum++;		
	}
	return sum;
}

int main() {
	setlocale(LC_ALL, "Russian");

	// Задача 1
	string str = "Hello world!";
	char sym;
	string newStr;
	cout << "Задача 1\nВведите символ из строки: " << str << endl;
	cin >> sym;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == sym)
			newStr += sym;
	}
	cout << newStr << endl;

	// Задача 2
	cout << "Задача 2\n";
	string str2 = "казак";
	cout << z2(str2) << endl;

	// Задача 3
	cout << "Задача 3\nНапишите предложение:\n";
	string str3 ;
	getline(cin, str3);
	getline(cin, str3);
	cout << "Количество специальных символов, включая пробелы: " << z3(str3) << endl;


	return 0;
}