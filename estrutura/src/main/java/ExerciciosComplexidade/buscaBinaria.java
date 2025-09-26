package ExerciciosComplexidade;

public class buscaBinaria { //complexidade do código: O(log n)
    public static void main (String[] args){
        int[] vetor = {1,3,5,7,9}; //O(1)
        int alvo = 9; //O(1)
        int inicio = 0; //O(1)
        int fim = vetor.length - 1; //O(1)
        boolean encontrado = false; //O(1)
        while(inicio <= fim){ //O(log n)
            int meio = (inicio + fim) / 2; //O(1)
            if(vetor[meio] == alvo){ //O(1)
                encontrado = true; //O(1)
                break;
            } else if (vetor[meio] < alvo) { //O(1)
                inicio = meio + 1; //O(1)
            } else {
                fim = meio - 1; //O(1)
            }
        }
    }
}
