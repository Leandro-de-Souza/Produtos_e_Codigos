using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_LANCHONETE {
    internal class Program {
        static void Main(string[] args) {

			CultureInfo CI = CultureInfo.InvariantCulture;

			int codigo, quantidade;
			double valorApagar;

			Console.Write("Codigo do produto comprado: ");
			codigo = int.Parse(Console.ReadLine());

			Console.Write("Quantidade comprada: ");
			quantidade = int.Parse(Console.ReadLine());

			valorApagar = 0;

			if (codigo == 1) {
				valorApagar = quantidade * 5.00;
			}
			else if (codigo == 2) {
				valorApagar = quantidade * 3.50;
			}
			else if (codigo == 3) {
				valorApagar = quantidade * 4.80;
			}
			else if (codigo == 4) {
				valorApagar = quantidade * 8.90;
			}
			else if (codigo == 5) {
				valorApagar = quantidade * 7.32;
			}

			Console.WriteLine("Valor a pagar: R$ " + valorApagar.ToString("F2", CI));
		}
	}
}
