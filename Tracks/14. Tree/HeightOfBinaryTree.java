// Rest of the code is already given as Driver Code

class Solution 
{
    int height(Node root) 
    {
        if(root == null)
            return 0;
        
        return 1 + Math.max(height(root.left),height(root.right));
    }  
}