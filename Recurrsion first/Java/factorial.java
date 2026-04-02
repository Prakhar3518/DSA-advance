package Java;

public class factorial {
    public static void main(String[] args){
        int num = 5;
        System.out.println(factorial(num));
    }

    static int factorial(int n){
        if(n == 1){
            return n;
        }
        n = n * factorial(n-1);
        return n;
    }

}
