// https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/
// 2138. Divide a String Into Groups of Size k

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class StringDivide {
    public static void main(String[] args){
        String s = "abcdefghij";
        int k = 3;
        char fill = 'x';

        StringDivide sd = new StringDivide();
        String[] ans = sd.divideString(s, k, fill);
        System.out.println(Arrays.toString(ans));
    }
    public String[] divideString(String s, int k, char fill) {
        List<String> ans = new ArrayList<String>();
        String t = "";
        for(int i = 0; i < s.length(); i++) {
            t += Character.toString(s.charAt(i));
            if(t.length() == k){
                ans.add(t);
                t = "";
            }
        }

        // There exist a t that requires to be filled.
        if(t.length() > 0) {
            while(t.length() < k) {
                t+= fill;
            }
            ans.add(t);
        }

        String[] divide = new String[ans.size()];
        return ans.toArray(divide);
    }
}
