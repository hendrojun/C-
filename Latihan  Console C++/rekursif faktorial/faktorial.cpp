#include <iostream>

using namespace std;



int faktorial(int n){

     if (n <=1){

          return n;

     }else{

          return n * faktorial(n - 1);

     }

}



int main(){

 

     int angka, hasil;

     cout << "menghitung faktorial dari: ";

     cin >> angka;



     hasil = faktorial(angka);

     cout << "nilai faktorialnya: " << hasil << endl;

 

     cin.get();

     return 0;

}