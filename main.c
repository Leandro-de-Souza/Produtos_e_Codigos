#include <stdio.h>


int main()
{

      int codigo, quantidade;
      double valorApagar;

      printf("Codigo do produto comprado: ");
      scanf("%d", &codigo);
      printf("Quantidade comprada: ");
      scanf("%d", &quantidade);

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

      printf("Valor a pagar: R$ %.2lf", valorApagar);



    return 0;
}
