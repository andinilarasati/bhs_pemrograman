# include <iostream>

using namespaces std;

int main(){
    int pilihan;
    double angka11, angka2;

    cout << "masukan angka pertama : ";
    cin >> angka1;

    cout << "masukan angka kedua : ";
    cin>> angka2;

    cout << endl;
    cout << "MENU" << endl;
    
    cout << "1. pertambahan " << endl;
    cout << "1. kurang " << endl;
    cout << "1. kali " << endl;
    cout << "1. bagi " << endl;
    cout << "Masukan Pilihan " ;
    cin >> pilihan;

    switch(pilihan){
        case 1 :
        cout << "Hasil : " << angka1 + angka2 << endl;
        break;
        case 2 :
        cout << "Hasil : " << angka1 - angka2 << endl;
        break;
        case 3 :
        cout << "Hasil : " << angka1 * angka2 << endl;
        break;
        case 4 :
            if(angka2 != 0){
        cout << "Hasil : " << angka1 / angka2 << endl;
            }else {
                cout << "Error; Division by zero is not allowed." << endl;
            }
        break;
    default:
        cout << "Invalid option selescted." << endl;
        break;
    }
    return 0;
}

}