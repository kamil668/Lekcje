#include <iostream>

using namespace std;

class Pracownik
{
private:
    string imie, nazwisko, stanowisko;
    double placa,staz;
public:
    
    Pracownik(string _imie,string _nazwisko,string _stanowisko,double _staz, double _placa)
    {
        this->imie = _imie;
        this->nazwisko = _nazwisko;
        this->stanowisko = _stanowisko;
        this->staz = _staz;
        this->placa = _placa;
    }
    
    Pracownik(const Pracownik& wzorzec)
    {
        imie = wzorzec.imie;
        nazwisko = wzorzec.nazwisko;
        stanowisko = wzorzec.stanowisko;
        staz = wzorzec.staz;
        placa = wzorzec.placa;
    }
    void WyswietlDane()
    {
        cout << "Imię " << imie << endl;
        cout << "Nazwisko " << nazwisko << endl;
        cout << "Stanowisko " << stanowisko << endl;
        cout << "Staż " << staz << endl;
        cout << "Płaca " << placa << endl;
    }

    
};




int main()
{
    setlocale(LC_ALL, "");

    string imie, nazwisko, stanowisko;
    double staz, placa;

    cout << "Imię :" << endl;
    cin >> imie;
    cout << "Nazwisko :" << endl;
    cin >> nazwisko;
    cout << "Stanowisko :" << endl;
    cin >> stanowisko;
    cout << "Staż :" << endl;
    cin >> staz;
    cout << "Płaca :" << endl;
    cin >> placa;

    Pracownik p1(imie, nazwisko, stanowisko, staz, placa);
    Pracownik p2(p1);

    p1.WyswietlDane();
    cout << "----------------------------------------" << endl;
    p2.WyswietlDane();


}
