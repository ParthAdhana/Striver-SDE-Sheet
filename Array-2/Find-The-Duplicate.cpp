class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            int val=abs(v[i]);
            if(v[val]<0)
            {
                return val;
            }
            v[val]=-v[val];
        }
        return 1;
    }
};