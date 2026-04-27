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
    double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }
    
    double hitungKeliling()
    {
        return 2 * (sisiA + sisiB);
    }
};

class BelahKetupat
{
    private:
    private:
        double d1, d2; 
        double sisi;


    public:
    void inputData()
    {
        cout << "===== Input Belah Ketupat =====" << endl;
            cout << "Masukkan d1 : ";
            cin >> d1;
            cout << "Masukkan d2 : ";
            cin >> d2;
            cout << "Masukkan sisi : ";
            cin >> sisi;
    }

    double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling()
        {
            return 4 * sisi;
        }
};

void tampilkanKeliling(LayangLayang& lk, BelahKetupat& bk)
{
    cout << "\n--- Hasil Keliling ---" << endl;
    cout << "Keliling Layang-Layang : " << lk.hitungKeliling() << endl;
    cout << "Keliling Belah Ketupat : " << bk.hitungKeliling() << endl;
}