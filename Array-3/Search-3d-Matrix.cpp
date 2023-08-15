class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();
        int low=0,high=n*m-1;
        while(high>=low)
        {
            int mid=(high+low)/2;
            int row=mid/n,col=mid%n;
            int val=mat[row][col];
            if(val==target)return true;
            if(val>target)
                high=mid-1;
            else if(val<target)
                low=mid+1;
        }
        return false;
    }
};