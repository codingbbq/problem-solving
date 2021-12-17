import java.util.HashMap;
import java.util.Map;

// https://leetcode.com/problems/ransom-note/
// 383. Ransom Note
public class RansomNote {
    public static void main(String[] args) {
        String ransomNote = "aa";
        String magazine = "aab";
        RansomNote rn = new RansomNote();
        boolean answer = rn.canConstruct(ransomNote, magazine);
        System.out.println(answer);
    }
    public boolean canConstruct(String ransomNote, String magazine) {
        Map<Character, Integer> r = new HashMap<Character, Integer>();
        Map<Character, Integer> m = new HashMap<Character, Integer>();

        // Convert string to character array
        char[] rArr = ransomNote.toCharArray();
        char[] mArr = magazine.toCharArray();

        // Find frequency of occurrence
        for(char i : rArr) {
            r.put(i, r.getOrDefault(i, 0)+1);
        }
        for(char j : mArr) {
            m.put(j, m.getOrDefault(j, 0)+1);
        }

        boolean possible = true;
        for(char x : r.keySet()) {
            if(!(m.containsKey(x) && m.get(x) >= r.get(x))) {
                possible = false;
                break;
            }
        }
        return possible;
    }
}
