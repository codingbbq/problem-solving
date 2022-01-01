// https://leetcode.com/problems/check-if-n-and-its-double-exist/
// 1346. Check If N and Its Double Exist

import java.util.HashMap;
import java.util.Map;

public class CheckIfDouble {
    public static void main(String[] args) {
        int[] arr = {3,1,7,11};
        CheckIfDouble cd = new CheckIfDouble();
        boolean ans = cd.checkIfExist(arr);
        System.out.println(ans);
    }
    public boolean checkIfExist(int[] arr) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();

        for(int i = 0; i < arr.length; i++) {
            if(map.containsKey(arr[i]*2) || (arr[i]%2 == 0 && map.containsKey(arr[i]/2))) {
                return true;
            } else {
                map.put(arr[i], 1);
            }
        }
        return false;
    }
}
