#include <iostream>

using namespace std;

struct Data
{
	int dd, mm, rr;

};
/*
class Pracownik
{
public:
	int id{0};
	string imie{ "Jan" }, nazwisko{"Kowalski"};
	Data data_urodzenia{31,12,1997};
};


class Pracownik
{
public:
	int id = 0;
	string imie = "Tomasz", nazwisko="Nowak";
	Data data_urodzenia = { 27,10,1995 };
};
*/

class Pracownik
{
public:
	int id;
	string imie, nazwisko;
	Data data_urodzenia;

	Pracownik(int _id = 0, string _imie = "Noname", string _nazwisko = "Noname", Data ur = {0,0,0})
	{
		id = _id;
		imie = _imie;
		nazwisko = _nazwisko;
		data_urodzenia = ur;
	}
	void WyswietlDane()
	{
		cout << "Id: " << id << endl;
		cout << "Imię: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
		cout << "Data urodzenia: " << data_urodzenia.dd << "/" << data_urodzenia.mm << "/" << data_urodzenia.rr << endl;
	}
};



int main()
{
	setlocale(LC_ALL, "");

	Pracownik p1;
	Pracownik p2(2);
	Pracownik p3(3, "Robert");
	Pracownik p4(4, "Tomasz","Nowak");
	Pracownik p5(5, "Anna", "Wiosna", { 1,1,1990 });
	p1.WyswietlDane();
	cout << "-----------------------------------------------------------------" << endl;
	p2.WyswietlDane();
	cout << "-----------------------------------------------------------------" << endl;
	p3.WyswietlDane();
	cout << "-----------------------------------------------------------------" << endl;
	p4.WyswietlDane();
	cout << "-----------------------------------------------------------------" << endl;
	p5.WyswietlDane();
}

