// https://leetcode.com/problems/count-prefixes-of-a-given-string/
// 2255. Count Prefixes of a Given String

public class CountPrefixOfString {
    public static void main(String[] args) {
        String[] words = {"a","a"};
        String s = "aa";
        CountPrefixOfString cs = new CountPrefixOfString();
        int ans = cs.countPrefixes(words, s);
        System.out.println(ans);
    }
    public int countPrefixes(String[] words, String s) {
        int count = 0;
        for(String x : words) {
            if(s.indexOf(x) == 0) {
                count++;
            }
        }
        return count;
    }
}
