// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
// 2011. Final Value of Variable After Performing Operations
public class PerformingOperations {

    public static void main(String[] args) {
        String[] operations = {"--X","X++","X++"};
        PerformingOperations po = new PerformingOperations();
        int answer = po.finalValueAfterOperations(operations);
        System.out.println(answer);
    }

    public int finalValueAfterOperations(String[] operations) {
        int answer = 0;
        for(int i = 0; i < operations.length; i++) {
            // This means we want to increment
            if(operations[i].contains("++")) {
                answer++;
            }
            if(operations[i].contains("--")) {
                answer--;
            }
        }
        return answer;
    }
}
