package Java;

public class Basic{
    public static void main(String[] args){
        int count = 0;
        message(count);
    }

    static void message(int count){
        System.out.println("Hello recursion");
        if(count < 2){
            count = count + 1;
            message(count);
        }

    }
}