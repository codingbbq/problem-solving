// https://leetcode.com/problems/reverse-vowels-of-a-string/
// 345. Reverse Vowels of a String

import java.util.HashMap;
import java.util.Map;

public class ReverseVowels {
    public static void main(String[] args) {
        String s = "leetcode";
        ReverseVowels rv = new ReverseVowels();
        String ans = rv.reverseVowels(s);
        System.out.println(ans);
    }
    public String reverseVowels(String s) {
        Map<Character, Boolean> map = new HashMap<Character, Boolean>();
        map.put('a', true);
        map.put('e', true);
        map.put('i', true);
        map.put('o', true);
        map.put('u', true);
        map.put('A', true);
        map.put('E', true);
        map.put('I', true);
        map.put('O', true);
        map.put('U', true);

        int start = 0;
        int end = s.length() - 1;
        char[] c = s.toCharArray();
        while(start < end) {
            if(!map.containsKey(c[start])) {
                start++;
            }
            if(!map.containsKey(c[end])) {
                end--;
            }
            if(map.containsKey(c[start]) && map.containsKey(c[end])) {
                char temp = c[start];
                c[start] = c[end];
                c[end] = temp;
                start++;
                end--;
            }
        }

        return String.valueOf(c);
    }
}
