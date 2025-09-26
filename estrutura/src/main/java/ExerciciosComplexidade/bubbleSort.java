package ExerciciosComplexidade;

public class bubbleSort {
    public static void main (String[]args) { //complexidade do código: O(n²)
        int[] vetor = {0,2,5,9,10}; //O(1)
        int n = vetor.length; //O(1)
        for (int i = 0; i < n - 1; i++) { //O(n)
            for (int j = 0; j < n - i - 1; j++) { //O(n)
                if (vetor[j] > vetor[j + 1]) { //O(1)
                    int temp = vetor[j]; //O(1)
                    vetor[j] = vetor[j + 1]; //O(1)
                    vetor[j + 1] = temp; //O(1)
                }
            }
        }
    }

}
