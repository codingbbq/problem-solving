// https://leetcode.com/problems/lemonade-change/
// 860. Lemonade Change

import java.util.HashMap;
import java.util.Map;

public class LemonadeChange {
    public static void main(String[] args) {
        int[] bills = {5,5,10,10,20};
        LemonadeChange lc = new LemonadeChange();
        boolean ans = lc.lemonadeChange(bills);
        System.out.println(ans);
    }

    public boolean lemonadeChange(int[] bills) {
        Map<Integer, Integer> billMap = new HashMap<Integer, Integer>();
        for(int i = 0; i < bills.length; i++) {

            // No need to give anything.
            billMap.put(bills[i], billMap.getOrDefault(bills[i], 0)+1);

            if(bills[i] == 10) {
                // Return 5 dollar bill
                if(billMap.containsKey(5) && billMap.get(5) > 0) {
                    billMap.put(5, billMap.get(5) - 1);
                } else {
                    return false;
                }
            }

            if(bills[i] == 20) {
                // Return one 10 dollar bill
                int toReturn = 15;
                if(billMap.containsKey(10) && billMap.get(10) > 0) {
                    billMap.put(10, billMap.get(10) - 1);
                    toReturn = 5;
                } else {
                    toReturn = 15;
                }

                // Return 5 dollar bill
                // But how many do we need ?
                int need = toReturn/5;
                if(billMap.containsKey(5) && billMap.get(5) >= need) {
                    billMap.put(5, billMap.get(5) - need);
                } else {
                    return false;
                }

            }
        }
        return true;
    }
}
