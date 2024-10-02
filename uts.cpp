#include<iostream>
#include<string>
using namespace std;

int main()
{
    double nilaiabsen, nilaitugas, nilaiuts, nilaiuas, nilaiakhir;
    string nama, npm, hurufmutu;

    cout << "======== MENGHITUNG NILAI SISWA ======\n";
    cout << "masukan nama : "; cin >> nama;
    cout << "masukan npm  : "; cin >> npm;
    cout << "masukan nilai absen : "; cin >> nilaiabsen;
    cout << "masukan nilai tugas : "; cin >> nilaitugas;
    cout << "masukan nilai uts   : "; cin >> nilaiuts;
    cout << "masukan nilai uas   : "; cin >> nilaiuas;

    nilaiakhir = (0.10*nilaiabsen) + (0.20*nilaitugas) + (0.30*nilaiuts) + (0.40*nilaiuas);

    if(nilaiakhir >= 85 &&  nilaiakhir < 100)
    {
        hurufmutu = "A";
    }
    else if(nilaiakhir >= 80 && nilaiakhir < 85)
    {
        hurufmutu = "B";
    }
    else if(nilaiakhir >= 75 && nilaiakhir < 80)
    {
        hurufmutu = "C";
    }
    else if(nilaiakhir >= 70 && nilaiakhir < 75)
    {
        hurufmutu = "D";
    }
    else
    {
        hurufmutu = "E";
    }
    cout << "\n========== DATA NILAI SISWA ========\n";
    cout << "Nama : " << nama << endl;
    cout << "NPM  : " << npm << endl;
    cout << "Nilai Absen : " << nilaiabsen << endl;
    cout << "Nilai Tugas : " << nilaitugas << endl;
    cout << "Nilai UTS   : " << nilaiuts << endl;
    cout << "Nilai UAS   : " << nilaiuas << endl;
    cout << "Nilai Akhir : " << nilaiakhir << endl;
    cout << "Huruf Mutu  : " << hurufmutu;


cout << "\n\n";
return 0;
}
