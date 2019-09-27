#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    float X,Y;
    int kode;

    menu :
    cout << "==selamat datang diprogram Kalkulator===" <<endl;
    cout << "Pilihan Menu : "<<endl;
    cout << "1.Penjumlahan (+)" <<endl;
    cout << "2.Pengurangan (-)" <<endl;
    cout << "3.Perkalian (*)"  <<endl;
    cout << "4.Pembagian (/)"<<endl;
    cout << "Silahkan masukkan pilihan : ";cin >> kode;
    if (kode > 4 || kode < 1){
        cout << "Kode yang anda masukkan tidak ada \n Silahkan masukkan ulang kode .";
        system("pause");
        system("cls");
        goto menu;
    }
    else {
        cout << "Masukkan angka pertama : ";cin >> X;
        cout << "Masukkan angka kedua   : ";cin >> Y;
        if (kode == 1){
            cout << "Hasil penjumlahan dari "<<X<<" + "<<Y<<" adalah : "<<X+Y<<endl;
        }
        else if (kode == 2){
            cout << "Hasil pengurangan dari "<<X<<" - "<<Y<<" adalah : "<<X-Y<<endl;
        }
        else if (kode == 3){
            cout << "Hasil perkalian dari "<<X<<" * "<<Y<<" adalah : "<<X*Y<<endl;
        }
        else if (kode == 4){
            cout << "Hasil pembagian dari "<<X<<" / "<<Y<<" adalah : "<<X/Y<<endl;
        }
    }
    return 0;
}
