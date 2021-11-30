// https://leetcode.com/problems/assign-cookies/


import java.util.Arrays;

public class AssignCookies {

    public static void main(String[] args) {
        int[] g = {1,2,3};
        int[] s = {1,1};
        AssignCookies ac = new AssignCookies();
        int k = ac.findContentChildren(g, s);
        System.out.println(k);
    }


    public int findContentChildren(int[] g, int[] s) {

        // sort both the arrays first
        Arrays.sort(g);
        Arrays.sort(s);

        int i = 0;
        for(int j = 0; j < s.length && i < g.length; j++) {
            if(s[j] >= g[i]) {
                i++;
            }
        }
        return i;

    }
}
