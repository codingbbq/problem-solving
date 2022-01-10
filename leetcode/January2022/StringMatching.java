// https://leetcode.com/problems/string-matching-in-an-array/
// 1408. String Matching in an Array

import java.util.ArrayList;
import java.util.List;

public class StringMatching {
    public static void main(String[] args) {
        String[] words = {"mass","as","hero","superhero"};
        StringMatching sm = new StringMatching();
        List<String> ans = sm.stringMatching(words);
        System.out.println(ans);
    }
    public List<String> stringMatching(String[] words) {
        List<String> ans = new ArrayList<String>();

        for(int i = 0; i < words.length; i++) {
            for(int j = 0; j < words.length; j++) {
                if(i != j ) {
                    if(words[i].contains(words[j]) && !words[j].equals("-1")) {
                        ans.add(words[j]);
                        words[j] = "-1";
                    }
                }
            }
        }
        return ans;
    }
}
