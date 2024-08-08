#include <iostream>

using namespace std;

class Prostokat
{
private :
    double a, b;
public:
    Prostokat();
    Prostokat(double _a, double _b);
    //Konstruktor kopiujący
    //nazwa klasy (const nazwa klasy &wzorzec)
    Prostokat(const Prostokat& wzorzec);

    double pole();
    double obwod();
};

Prostokat::Prostokat()
{
    a = 0;
    b = 0;
}
Prostokat::Prostokat(double _a, double _b)
{
    a = _a;
    b = _b;
}
Prostokat::Prostokat(const Prostokat& wzorzec)
{
    a = wzorzec.a;
    b = wzorzec.b;
}
double Prostokat::pole()
{
    return a * b;
}
double Prostokat::obwod()
{
    return 2 * a + 2 * b;
}

int main()
{
    setlocale(LC_ALL, "");

    Prostokat p1(3, 4);
    Prostokat p2(p1);
    


    cout << "p1 pole " << p1.pole() << endl;
    cout << "p2 pole " << p2.pole() << endl;
    

}
