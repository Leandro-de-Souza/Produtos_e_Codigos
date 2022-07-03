#include <bits/stdc++.h>

using namespace std;

int main()
{

       int codigo, quantidade;
       double valorApagar;

       cout << "Codigo do produto comprado: ";
       cin >> codigo;
       cout << "Quantidade comprada: ";
       cin >> quantidade;

      if ( codigo == 1) {
          valorApagar = 5.00 * quantidade;
      }
      else if ( codigo == 2) {
          valorApagar = 3.50 * quantidade;
      }
      else if ( codigo == 3) {
          valorApagar = 4.80 * quantidade;
      }
      else if ( codigo == 4) {
          valorApagar = 8.90 * quantidade;
      }
      else if ( codigo == 5) {
          valorApagar = 7.32 * quantidade;
      }

      cout << fixed << setprecision(2);
      cout << "Valor a pagar: R$ " << valorApagar << endl;


    return 0;
}
