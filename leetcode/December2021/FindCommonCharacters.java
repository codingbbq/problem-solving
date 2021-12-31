// https://leetcode.com/problems/find-common-characters/
// 1002. Find Common Characters

import java.util.ArrayList;
import java.util.List;

public class FindCommonCharacters {
    public static void main(String[] args) {
        String[] words = {"bella","label","roller"};
        FindCommonCharacters fc = new FindCommonCharacters();
        List<String> ans = fc.commonChars(words);
        System.out.println(ans);
    }
    public List<String> commonChars(String[] words) {

        int len = words.length;
        List<String> ans = new ArrayList<String>();

        // Take the first word and check
        String first = words[0];

        for(int i = 0; i < first.length(); i++) {
            int count = 0;
            for(int j = 1; j < words.length; j++) {
                if(words[j].contains(Character.toString(first.charAt(i)))) {
                    count++;
                    // Find the index of the character that is found and replace it with 1 so that it is not used next time.
                    int foundIndex = words[j].indexOf(first.charAt(i));
                    words[j] = words[j].substring(0, foundIndex) + "1" + words[j].substring(foundIndex+1);
                }
            }
            if(count >= len-1) {
                ans.add(Character.toString(first.charAt(i)));
            }
        }

        return ans;
    }
}
