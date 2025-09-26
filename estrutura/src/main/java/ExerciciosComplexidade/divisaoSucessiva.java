package ExerciciosComplexidade;

public class divisaoSucessiva { // complexidade do código: O(log n)
    public static void main (String[] args){
        int n = 10; //O(1)
        int x = n; //O(1)

        while (x > 1) { //O(log n)
            x = x / 2; //O(1)
            System.out.println(x);//O(1)
        }
    }
}
