// https://leetcode.com/problems/license-key-formatting/
// 482. License Key Formatting

public class LicenceKeyFormatting {
    public static void main(String[] args) {
        String s = "---";
        int k = 3;
        LicenceKeyFormatting lf = new LicenceKeyFormatting();
        String ans = lf.licenseKeyFormatting(s, k);
        System.out.println(ans);
    }
    public String licenseKeyFormatting(String s, int k) {
        char[] c = s.toUpperCase().toCharArray();
        int count = 0;
        for(int i = 0; i < c.length; i++) {
            if(c[i] == '-') {
                continue;
            } else {
                count++;
            }
        }

        // Now we have count of actual characters.
        int first = count%k;
        int stops = first;
        if(stops == 0) {
            stops+=k;
        }
        String ans = "";
        for(int i = 0; i < c.length; i++) {
            if(c[i] == '-') continue;
            ans+=Character.toString(c[i]);
            if(ans.length() == stops) {
                ans+= "-";
                stops+=k+1;
            }
        }
        if(ans.length() > 0 && ans.charAt(ans.length()-1) == '-'){
            ans = ans.substring(0, ans.length()-1);
        }
        return ans;
    }
}
