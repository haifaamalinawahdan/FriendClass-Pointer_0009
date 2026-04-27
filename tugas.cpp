// Buatlah sebuah program yang berisi 2 class dimana terdapat class Layang-Layang, Belah Ketupat.
// Di setiap class nya berisikan luas dan keliling serta input dan output.
// Setiap variable memiliki akses private, BangunDatar Belah Ketupat merupakan friend function keliling dari Layang-Layang, dan 
// semua class hanya dapat diakses menggunakan object.


#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;
class LayangLayang
{
private:
    double d1, d2;
    double sisiA, sisiB;

public:
    void inputData()
        {
            cout << "===== Input Layang-Layang =====" << endl;
            cout << "Masukkan d1 Layang-layang: ";
            cin >> d1;
            cout << "Masukkan d2 Layang-layang: ";
            cin >> d2;
            cout << "Masukkan sisi A : ";
            cin >> sisiA;
            cout << "Masukkan sisi B : ";
            cin >> sisiB;
        }

};