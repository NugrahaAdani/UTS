#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Masukan bilangan : "; cin >> n;

    cout << "Bilangan ganjil : \n";
    for(int i = 1; i < n; i += 2)
    {
        cout << i << endl;
    }
    cout << "Bilangan genap : \n";
    for(int i = 0; i < n; i += 2)
    {
        cout << i << endl;
    }
    return 0;
}
