// https://leetcode.com/problems/shortest-completing-word/
// 748. Shortest Completing Word

import java.util.HashMap;
import java.util.Map;

public class ShortestCompletingWord {
    public static void main(String[] args) {
        String licensePlate = "1s3 PSt";
        String[] words = {"step","steps","stripe","stepple"};
        ShortestCompletingWord sw = new ShortestCompletingWord();
        String ans = sw.shortestCompletingWord(licensePlate, words);
        System.out.println(ans);
    }
    public String shortestCompletingWord(String licensePlate, String[] words) {
        Map<Character, Integer> map = new HashMap<Character, Integer>();

        char[] lp = licensePlate.toCharArray();
        for(char x : lp) {
            if(Character.isLetter(x)) {
                char temp = Character.toLowerCase(x);
                map.put(temp, map.getOrDefault(temp, 0) + 1);
            }
        }

        String found = "";
        for(String word : words) {

            boolean accept = true;
            for(Map.Entry<Character, Integer> x : map.entrySet()) {
                int idx = 0, startIndex = 0;
                int count = 0;
                while(idx != -1) {
                    idx = word.indexOf(x.getKey(), count == 0 ? 0 : idx+1);
                    if(idx != -1) {
                        count++;
                    }
                }
                if(count < x.getValue()) {
                    accept = false;
                    break;
                }
            }

            // Can accept the word
            if(accept){
                if(found.length() == 0) {
                    found = word;
                }else if(word.length() < found.length()) {
                    found = word;
                }
            }
        }
        return found;
    }
}
