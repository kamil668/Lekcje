#include <iostream>

using namespace std;

class Osoba
{
    string imie;
    string nazwisko;
    int wiek;
public:
    void setImie(string im)
    {
        this->imie = im;
    }
};

struct Uczen
{
    string imie;
    string nazwisko;
    double srednia;
    //Wprawdzie struktury pozwalają na tworzenie metod ale dla zasad dobrego programowania należy unikanie definiowania
    //metod w sturkturach. Struktury przechowują jedynie surowe dane zawarte w skladowych struktury.
    void WyswietlDane()
    {
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Średnia: " << srednia << endl;
    }
};

struct Pracownik
{
    string imie;
    string nazwisko;
    string stanowisko;
    int placa;
    void WyswietlDane()
    {
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Stanowisko: " << stanowisko << endl;
        cout << "Płaca: " << placa << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "");
    Osoba o1;
    Uczen u1;
    
    //Skladowe kalsy domyślnie są prywatne, składowe struktury domyślnie są publiczne


    u1.imie = "Jan";
    u1.nazwisko = "Kowalski";
    u1.srednia = 3.4;

    //cout << "Imie: " << u1.imie << endl;

    u1.WyswietlDane();
    
  /* Uczen* u;
    u->imie = "Tomasz";
    u->nazwisko = "Nowak";
    u->srednia = 3.4;*/


    //o1.imie = "Jan";
    Pracownik p1;
    int ile;
    cout << "Ilu chcesz wprowadzić pracowników" << endl;
    cin >> ile;

  Pracownik * pracownicy = new Pracownik[ile];

    for (int i = 0; i < ile; i++)
    {
        cout << "Imie: " << endl;
        cin >> pracownicy[i].imie;
            cout << "Nazwisko: " << endl;
        cin >> pracownicy[i].nazwisko;
            cout << "Stanowisko: " << endl;
        cin >> pracownicy[i].stanowisko;
            cout << "Płaca: " << endl;
        cin >> pracownicy[i].placa;
    }
    int placa = 0;
    int ktory = 0;
    for (int i = 0; i < ile; i++)
    {
        if (pracownicy[i].placa > placa)
        {
            placa = pracownicy[i].placa;
            ktory = i;
        }
    }
    cout << "---------------------------------------" << endl;
    cout << "Pracownik z największą pensją" << endl;
    pracownicy[ktory].WyswietlDane();
}
