// https://leetcode.com/problems/count-items-matching-a-rule/
// 1773. Count Items Matching a Rule

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class CountItemsMatchingRule {
    public static void main(String[] args) {
        List<List<String>> items = new ArrayList<>();
        items.add(Arrays.asList("phone","blue","pixel"));
        items.add(Arrays.asList("computer","silver","lenovo"));
        items.add(Arrays.asList("phone","gold","iphone"));
        String ruleKey = "color", ruleValue = "silver";

        CountItemsMatchingRule c = new CountItemsMatchingRule();
        int count = c.countMatches(items, ruleKey, ruleValue);
        System.out.println(count);
    }
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int checkIndex = 0;
        int answer = 0;
        switch (ruleKey) {
            case "type":
                checkIndex = 0;
                break;
            case "color":
                checkIndex = 1;
                break;
            case "name":
                checkIndex = 2;
                break;
        }

        for(int i = 0; i < items.size(); i++) {
            if(items.get(i).get(checkIndex).equals(ruleValue)) {
                answer++;
            }
        }

        return answer;
    }
}
