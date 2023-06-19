// https://leetcode.com/problems/delete-greatest-value-in-each-row/
// 2500. Delete Greatest Value in Each Row

{
    function deleteGreatestValue(grid: number[][]): number {
        // First sort
        grid.forEach((row) => {
            row.sort((a, b) => b - a);
        });

        // Loop over each sorted array and find the maximum
        let total = 0;
        for(let i = 0; i < grid[0].length; i++) {
            let max = 0;
            for(let j = 0; j < grid.length; j++) {
                max = Math.max(max, grid[j][i]);
            }
            total += max;
        }
        return total;
    };

    const grid = [[10]];
    console.log(deleteGreatestValue(grid));
}