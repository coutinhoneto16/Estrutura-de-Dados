package ExerciciosComplexidade;

public class recursaoFibonacci { //complexidade do código: O(2^n)
    public static void main (String[] args){

    }

    static int fibonacci(int n){
        if (n <= 1) return 1; //O(1)
        return fibonacci (n-1) + fibonacci (n-2); //O(2^n)
    }
}
