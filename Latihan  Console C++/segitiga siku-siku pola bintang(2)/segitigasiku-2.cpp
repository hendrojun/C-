#include <iostream>

using namespace std;



int main(){

 

    int n;

    cout << "Masukan panjang pola: ";

    cin >> n;



    cout << endl;

    for(int i = 1; i <= n; i++){

         for(int j = 1; j < i; j++){

             cout << " " ;

         }

         for(int k = n; k >= i; k--){

             cout << "*" ;

         }

         cout << endl ;

     }

      cout << endl;



    for(int i = 1; i <= n; i++){

         for(int j = n; j > i; j--){

             cout << " " ;

         }

         for(int k = 1; k <= i; k++){

             cout << "*" ;

         }

         cout << endl ;

     }

 

     cin.get();

     return 0;

}