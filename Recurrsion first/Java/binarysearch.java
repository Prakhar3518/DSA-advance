package Java;

import java.util.ArrayList;

public class binarysearch {
    public static int binarysearch(ArrayList<Integer>list1,int low,int high,int target){
        int mid = (low + high)/2;
        if(list1.get(mid) > target){
            return binarysearch(list1,low,mid-1,target);
        }
        else if(list1.get(mid) < target){
            return binarysearch(list1,mid+1,high,target);
        }
        else{
            return mid;
        }
    }
    public static void main(String[] args){
        ArrayList<Integer>list1 = new ArrayList<>();
        list1.add(10);
        list1.add(20);
        list1.add(22);
        list1.add(24);
        list1.add(40);
        list1.add(45);

        int low = 0;
        int high = list1.size();
        int target = 20;
        System.out.println("Required element is present at index "+ binarysearch(list1,low,high,target));


    }
}
