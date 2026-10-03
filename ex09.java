import java.util.Scanner;

public class Exercicio09 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.print("Contar até: ");
        int limite = entrada.nextInt();

        if (limite < 1) {
            System.out.println("Informe um número maior que zero.");
        } else {
            for (int numero = 1; numero <= limite; numero++) {
                System.out.println(numero);
            }
        }
        entrada.close();
    }
}
