// https://leetcode.com/problems/return-length-of-arguments-passed/
// 2703. Return Length of Arguments Passed

{
    function argumentsLength(...args: any[]): number {
        return args.length;
    };
    
    console.log(argumentsLength(1, 2, 3)); // 3
    
}