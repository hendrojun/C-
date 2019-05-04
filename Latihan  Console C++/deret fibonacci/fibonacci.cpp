#include <iostream>

using namespace std;



int main(){



    int n, f_n, f_n1, f_n2;



    cout << "Program Deret Fibonacci "<< endl;

    cout << "Masukan nilai ke-n: ";

    cin >> n;



    f_n1 = 1;

    f_n2 = 0;



    for(int i = 0; i < n; i++){

        f_n = f_n1 + f_n2;

        f_n2 = f_n1;

        f_n1 = f_n;

        cout << f_n << endl;

    }



    cin.get();

    return 0;

}