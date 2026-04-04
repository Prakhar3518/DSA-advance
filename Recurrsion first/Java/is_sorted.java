package Java;

import java.util.ArrayList;

public class is_sorted {
    public static boolean issorted(ArrayList<Integer> list1, int i){
        if(i == list1.size() - 2){
            if(list1.get(i) <= list1.get(i+1)){
                return true;
            }
            else{
                return false;
            }
        }
        if(list1.get(i) > list1.get(i+1)){
            return false;
        }
        return issorted(list1,i+1);
    }
    public static void main(String[] args){
        ArrayList<Integer> list1 = new ArrayList<>();
        list1.add(1);
        list1.add(2);
        list1.add(3);
        list1.add(4);
        list1.add(5);
        int i = 0;
        System.out.println(issorted(list1,i));
    }
}
