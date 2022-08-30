// https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3250/

import java.util.HashSet;

public class CheckNAndItsDouble {
    public static void main(String[] args) {
        int[] arr = { -2,0,10,-19,4,6,-8 };
        CheckNAndItsDouble cd = new CheckNAndItsDouble();
        boolean ans = cd.checkIfExist(arr);
        System.out.println(ans);
    }

    public boolean checkIfExist(int[] arr) {
        // Using a hashset
        HashSet<Integer> map = new HashSet<Integer>();
        for(int x : arr) {
            if(map.contains(x*2) || (x%2 == 0 && map.contains(x/2))) return true;
            map.add(x);
        }
        return false;

        // Brute force solution
        /*
        for(int i = 0; i < arr.length; i++) {
            for(int j = 0; j < arr.length; j++) {
                if(i != j && arr[i] * 2 == arr[j]) {
                    return true;
                }
            }
        }
        return false;
        */
    }
}
