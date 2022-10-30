/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj liczbe A: " << endl;
    int a;
    cin >> a;

    cout << "Podaj liczbe B: " << endl;
    int b;
    cin >> b;
    
    int dodawanie, odejmowanie, iloczyn, iloraz;
    dodawanie = a + b;
    cout << "Suma wynosi: " << dodawanie << endl;
    
    odejmowanie = a - b;
    cout << "Roznica wynosi: " << odejmowanie << endl;
    
    iloczyn = a * b;
    cout << "Iloczyn wynosi: " << iloczyn << endl;
    
    iloraz = a / b;
    cout << "Iloraz wynosi: " << iloraz << endl;
    

    return 0;
}
