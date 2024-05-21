#include <iostream> 
using namespace std;

int main ()
{
    int bilangan1 = 0;
    int bilangan2 = 0;
    
    
    
    cout << "KALKUKATOR SEDERHANA" << endl;
    cout << " 1. pertambahan" << endl;
    cout << " 2. pengurangan" << endl;
    cout << " 3. perkalian" << endl;
    cout << " 4. pembagian" << endl;
    cout << endl;
    
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