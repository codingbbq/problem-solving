// https://leetcode.com/problems/capitalize-the-title/
// 2129. Capitalize the Title

public class CapitalizeTheTitle {
    public static void main(String[] args) {
        String title = "First leTTeR of EACH Word";
        CapitalizeTheTitle ct = new CapitalizeTheTitle();
        String ans = ct.capitalizeTitle(title);
        System.out.println(ans);
    }
    public String capitalizeTitle(String title) {
        String[] out = title.split(" ");
        for(int i = 0; i < out.length; i++) {
            if(out[i].length() <= 2) {
                out[i] = out[i].toLowerCase();
            } else {
                out[i] = out[i].substring(0,1).toUpperCase() + out[i].substring(1).toLowerCase();
            }
        }
        return String.join(" ", out);
    }
}
