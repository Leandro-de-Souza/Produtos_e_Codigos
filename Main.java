import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int codigo, quantidade;
	    double valorApagar;
	    
	    System.out.print("Codigo do produto comprado: ");
	    codigo = sc.nextInt();
	    System.out.print("Quantidade comprada: ");
	    quantidade = sc.nextInt();
	    
	    valorApagar = 0;
	    
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
	    
	    System.out.println("Valor a pagar: R$ " + String.format("%.2f", valorApagar));
	    
	    sc.close();
	
	}

}
