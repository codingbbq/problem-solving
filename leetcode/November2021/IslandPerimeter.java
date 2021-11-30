// https://leetcode.com/problems/island-perimeter/

public class IslandPerimeter {

    public static void main(String[] args) {
        int[][] grid = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};

        IslandPerimeter ip = new IslandPerimeter();
        int perimeter = ip.islandPerimeter(grid);
        System.out.println(perimeter);

    }

    public int islandPerimeter(int[][] grid) {

        int p = 0;
        for(int i = 0; i < grid.length; i++) {
            for(int j = 0; j < grid[i].length; j++) {

                // For the grid that has val == 1
                // Check all its neighbours
                if(grid[i][j] == 1) {

                    // Check left
                    if(j - 1 >= 0) {
                        if(grid[i][j-1] == 1) {
                            p+=0;
                        } else {
                            p+=1;
                        }
                    } else {
                        p+=1;
                    }

                    // Check top
                    if(i-1 >= 0) {
                        if(grid[i-1][j] == 1) {
                            p+=0;
                        } else {
                            p+=1;
                        }
                    } else {
                        p+=1;
                    }

                    // Check right
                    if(j+1 < grid[i].length) {
                        if(grid[i][j+1] == 1) {
                            p+=0;
                        } else {
                            p+=1;
                        }
                    }else{
                        p+=1;
                    }

                    // Check bottom
                    if(i+1 < grid.length) {
                        if(grid[i+1][j] == 1) {
                            p+=0;
                        } else {
                            p+=1;
                        }
                    }else{
                        p+=1;
                    }
                } // if

            }
        }
        return p;
    }

}
