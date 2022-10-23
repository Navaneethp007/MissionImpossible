Problem Link : https://leetcode.com/problems/spiral-matrix/

class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;
        int top = 0, down = n-1, left = 0, right = m-1;             //4 boundaries
        int dir = 0;        //direction of traversal
        /*
        * 0 means travel to left, 
        * 1 means travel downwards,
        * 2 means travel to right,
        * 3 means travel upwards.
        */        
        List<Integer> result = new ArrayList<Integer>();
        
        while(top<=down && left <= right){
            if(dir == 0){
                for(int i=left;i<=right;i++){
                    result.add(matrix[top][i]);
                }
                top += 1;
            }
            
            else if(dir == 1){
                for(int i=top;i<=down;i++){
                    result.add(matrix[i][right]);
                }
                right -= 1;
            }
            else if(dir == 2){
                for(int i=right;i>=left;i--){
                    result.add(matrix[down][i]);
                }
                down -= 1;
            }
            
            else if(dir == 3){
                for(int i=down;i>=top;i--){
                    result.add(matrix[i][left]);
                }
                left += 1;
            }
            
            dir = (dir+1) % 4;            
            
        }
        
        return result;
    }
}
