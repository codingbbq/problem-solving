// https://leetcode.com/problems/maximum-number-of-balloons/
// 1189. Maximum Number of Balloons

import java.util.HashMap;
import java.util.Map;

public class MaximumBalloon {
    public static void main(String[] args) {
        String text = "bballoonnlaebolko";
        MaximumBalloon mb = new MaximumBalloon();
        int ans = mb.maxNumberOfBalloons(text);
        System.out.println(ans);
    }
    public int maxNumberOfBalloons(String text) {
        Map<Character, Integer> map = new HashMap<Character, Integer>();
        map.put('b', 0);
        map.put('a', 0);
        map.put('l', 0);
        map.put('o', 0);
        map.put('n', 0);

        for(int i = 0; i < text.length(); i++) {
            if(map.containsKey(text.charAt(i))) {
                map.put(text.charAt(i), map.get(text.charAt(i))+1);
            }
        }

        if(map.get('l') >= 2) {
            // Loop through the map and return the count.
            int ans = 0;
            int loopcount = map.get('b');
            for(int i = 0; i < loopcount; i++) {
                if(map.get('b') >= 1 && map.get('a') >= 1 && map.get('n') >= 1 && map.get('o') >= 2 && map.get('l') >= 2) {
                    ans+=1;
                    map.put('b', map.get('b') - 1);
                    map.put('a', map.get('a') - 1);
                    map.put('n', map.get('n') - 1);
                    map.put('l', map.get('l') - 2);
                    map.put('o', map.get('o') - 2);
                }
            }
            return ans;
        } else {
            return 0;
        }
    }
}
