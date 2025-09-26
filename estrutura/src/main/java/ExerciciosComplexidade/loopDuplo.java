package ExerciciosComplexidade;

public class loopDuplo { // complexidade do código:
    public static void main (String[] args) {
        int n = 10; //O(1)
        for (int i = 0; i < n; i++){ //O(n)
            for (int j = 0; j < n; j++){ //O(n)
                System.out.println(i + " " + j);//O(1)
            }
        }
    }

    }

