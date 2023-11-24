/**
 * Demonstração que em Java ocorre erro de execução (ArrayIndexOutOfBoundsException) ao tentar acessar um índice inválido de um vetor.
 */
import java.util.Scanner;

public class Exemplo1 {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int[] vetor = new int[5];
        
        System.out.println("Digite 5 números inteiros:");
        vetor[0] = entrada.nextInt();
        vetor[1] = entrada.nextInt();
        vetor[2] = entrada.nextInt();
        vetor[3] = entrada.nextInt();
        vetor[4] = entrada.nextInt();

        System.out.println("\nOs números digitados foram:");
        System.out.println(vetor[0]);
        System.out.println(vetor[1]);
        System.out.println(vetor[2]);
        System.out.println(vetor[3]);
        System.out.println(vetor[4]);
        
        System.out.println("O vetor tem tamanho " + vetor.length);
        
        // Aqui vai ocorrer um erro de execução (ArrayIndexOutOfBoundsException)
        System.out.println(vetor[5]);
    }
}