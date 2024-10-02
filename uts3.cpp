#include<iostream>
using namespace std;

int main()
{
    char n;
    float no1, no2;

    cout << "Masukan jenis operator(+,-,*,/) : ";
    cin >> n;

    cout << "Masukan angka : "; cin >> no1;
    cout << "Masukan angka : "; cin >> no2;

    switch(n)
    {
    case '+':
        cout << no1 << " + " << no2 << " = " << no1 + no2;
        break;
    case '-':
        cout << no1 << " - " << no2 << " = " << no1 - no2;
        break;
    case '*':
        cout << no1 << " * " << no2 << " = " << no1 * no2;
        break;
    case '/':
        cout << no1 << " / " << no2 << " = " << no1 / no2;
        break;
    default :
        cout << "operator salah!!!";
        break;
    }
    return 0;
}
