#include<iostream>
using namespace std;

int main()
{
    double tinggi;
    double berat;
    double imt;

    cout << "PROGRAM MENGHITUNG INDEKS MASSA TUBUH\n";
    cout << "--------------------------------------\n";
    cout << "Masukkan berat badan anda(kg) : ";
    cin >> berat;

    cout << "Masukkan tinggi badan anda(m) : ";
    cin >> tinggi;

    imt = berat / (tinggi * tinggi);

    cout << "======== HASIL ========\n";
    cout << "imt anda : " << imt << endl;

    if (imt < 18.4)
    {
        cout << "Berat badan kurang\n";
    }
    else if (imt >= 18.5 && imt < 24.9)
    {
        cout << "Berat badan ideal\n";
    }
    else if (imt >= 25 && imt < 29.9)
    {
        cout << "Berat badan lebih\n";
    }
    else if (imt >= 30 && imt < 39.9)
    {
        cout << "Gemuk\n";
    }
    else
    {
        cout << "Sangar gemuk";
    }

cout << "\n\n";
return 0;
}
