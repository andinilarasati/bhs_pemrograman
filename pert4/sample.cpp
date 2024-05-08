# include <iostream>
#include <string>
using namespace std;

class Nama {
    public :
        string fName, mName, lName;
        void full(string fName, string mName, string lName)
        {
            cout << "FULL NAME : " << fName + " "<< mName << " " << lName << endl;

        }
};

int main() {
    Nama n;
    int pilih;
    char pil; 
menu:
    cout << "MENU" << endl;
    cout << "1. input " << endl;
    cout << "2. Exit " << endl;
    cout << "pilihan : " ;
    cin >> pilih;

    switch(pilih){
        case 1;
        cout << "Masukan Nama Depan : " ;
        cin >> n.fName;
        cout << "Masukan Nama Tengah : " ;
        cin >> n.mName;
        cout << "Masukan Nama Akhir : " ;
        cin >> n.lName;
        n.full(n.fName, n.mName, n.lName);
        break;
    case 2:
        goto keluar;
        break;

    default:
        cout << "Pilihan Salah" << endl;
        break;
    }

    cout << "Ingin Mengulangi ? (Y/N) :";
    cin>> pil;
    if ((pil == 'Y' || pil == 'y'))
       {goto menu;}
    else if ((pil == 'N' || pil == 'n'))
       {goto keluar;}

    keluar:
        cout << "\n TERIMA KASIH" << endl;
        
        return 0;
}