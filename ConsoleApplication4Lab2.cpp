#include <iostream>
#include <time.h> //do zadania 6 losowania
using namespace std;

int main()
{

	//zadanie1
	cout << "zadanie1,2,3" << endl;
	int a;
	float LiczPtk, suma1 = 0;
	cout << "Podaj liczbe studentow: ";
	cin >> a;
	int a1 = a;
	cout << endl;
	if (a > 0) {

		while (a > 0) {
			cout << "Podaj liczbe punktow: ";
			cin >> LiczPtk;
			//zadanie2 dodatek 0-100
			if (LiczPtk >= 0 && LiczPtk <= 100) {
				cout << endl;
				suma1 += LiczPtk;
				a--;
			} //dodatek do zadania3
			if (a == 0) break;
			continue;
		}
		cout << "Srednia ilosc punktow " << suma1 / a1 << endl;
	}
	else {
		cout << "W grupie musi być conajmniej 1 student" << endl;
	}
	cout << endl;
	cout << endl;


	//zadanie4
	cout << "zadanie4" << endl;
	int b, sd = 0, su = 0, ld = 0, lu = 0;
	for (int i = 0; i < 10; i++) {
		cout << "Podaj liczbe: ";
		cin >> b;
		if (b >= 0) {
			sd += b; //sd = sd + b
			ld++;
		}
		else {
			su += b; //su = su + b
			lu++;
		}
	}
	cout << "suma liczb doatnich " << sd << " ilosc liczb dodatnich " << ld << endl;
	cout << "suma liczb ujemnych " << su << " ilosc liczb ujemnych " << lu << endl;
	cout << endl;
	cout << endl;


	//zadanie5
	cout << "zadanie5" << endl;
	int n, liczba, suma5 = 0;
	cout << "Podaj n: ";
	cin >> n;
	if (n > 0) {
		for (int x = 0; x < n; x++) {
			cout << "Podaj liczbe: ";
			cin >> liczba;
			if (liczba % 2 == 0) {
				suma5 += liczba;
			}
		}
		cout << "Suma liczb parzystych: " << suma5 << endl;
	}
	else {
		cout << "n nie moze byc nieujemne" << endl;
	}

	cout << endl;
	cout << endl;


	//zadanie6
	cout << "zadanie6" << endl;
	int z, liczba6, suma6=0;
	srand(time(NULL));
	cout << "Podaj ilosc liczb ";
	cin >> z;
	if (z > 0) {
		cout << "Wylosowane elementy ";
		for (int x = 0; x < z; x++) {
			liczba6 = rand() % 56 - 10; //-10,45
			//liczba = rand() % 146 - 12; //-12,146
			//liczba = rand() % 11; //0,10
			cout << liczba6 << " ";
			if (liczba6 % 2 == 0) suma6 += liczba6;

		}
		cout << endl << "Suma liczb parzystych " << suma6 << endl;
	}

}