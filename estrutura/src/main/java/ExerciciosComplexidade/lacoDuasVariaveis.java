package ExerciciosComplexidade;

public class lacoDuasVariaveis { //complexidade do código: O(n + m)
    public static void main(String[] args){
        int n = 5; //O(1)
        int m = 10; //O(1)
        for (int i = 0; i < n; i++) { //O(n)
            System.out.println(i); //O(1)
        }
        for (int j = 0; j < m; j++) { //O(m)
            System.out.println(j); //O(1)
        }
    }
}
