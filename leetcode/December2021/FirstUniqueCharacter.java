// https://leetcode.com/problems/first-unique-character-in-a-string/
// 387. First Unique Character in a String

import java.util.HashMap;
import java.util.Map;

public class FirstUniqueCharacter {
    public static void main(String[] args) {
        String s = "loveleetcode";
        FirstUniqueCharacter fc = new FirstUniqueCharacter();
        int ans = fc.firstUniqChar(s);
        System.out.println(ans);
    }
    public int firstUniqChar(String s) {
        char[] sArray = s.toCharArray();
        Map<Character, Integer> count = new HashMap<Character, Integer>();
        // Find the frequency
        for(char a : sArray) {
            count.put(a, count.getOrDefault(a, 0)+1);
        }

        // Search for the index
        for(int i = 0; i < sArray.length; i++) {
            if(count.get(sArray[i]) == 1) {
                return i;
            }
        }
        return -1;
    }
}
