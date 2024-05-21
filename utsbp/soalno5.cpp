#include <iostream>


using namespace std;

int main ()
{
    int bilangan1 = 0;
    int bilangan2 = 0;
    
    cout << " masukan angka pertama : ";
    cin >> bilangan1;
    cout << " masukan angka kedua : ";
    cin >> bilangan2;
    
    
    int penjumlahan = bilangan1 + bilangan2;
    cout <<"penjumlahan : "<< penjumlahan << endl; 
     
     int pengurangan = bilangan1 - bilangan2;
     cout <<"pengurangan : "<< pengurangan << endl;
     
     int perkalian = bilangan1 * bilangan2;
    cout <<"perkalian : "<< perkalian << endl;
    
    int pembagian = bilangan1 / bilangan2;
    cout <<"pembagian : "<< pembagian << endl;
    
    
    return 0;
    
}