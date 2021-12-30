// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/
// 1160. Find Words That Can Be Formed by Characters

import java.util.HashMap;
import java.util.Map;

public class FindWords {
    public static void main(String[] args) {
        String[] words = {"cat","bt","hat","tree"};
        String chars = "atach";
        FindWords fw = new FindWords();
        int count = fw.countCharacters(words, chars);
        System.out.println(count);
    }
    public int countCharacters(String[] words, String chars) {
        // HashMap for the chars
        Map<Character, Integer> freq = new HashMap<Character, Integer>();
        for(int i = 0; i < chars.length(); i++) {
            freq.put(chars.charAt(i), freq.getOrDefault(chars.charAt(i), 0)+1);
        }

        int count = 0;

        for(int i = 0; i < words.length; i++) {
            String str = words[i];
            // Creates a deep copy of the hashmap. This is temporary
            Map<Character, Integer> temp = new HashMap<Character, Integer>(freq);
            boolean found = true;
            for(int j = 0; j < str.length(); j++) {
                if(temp.containsKey(str.charAt(j)) && temp.get(str.charAt(j)) >= 1) {
                    int newVal = temp.get(str.charAt(j)) - 1;
                    temp.put(str.charAt(j), newVal);
                } else {
                    found = false;
                    break;
                }
            }
            if(found) {
                count+= str.length();
            }
        }
        return count;
    }
}
