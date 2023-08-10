class Solution {
public:
    int maxProfit(vector<int>& v) {
        int ans=0,n=v.size();
        int min_so_far=v[0];
        int max_so_far=v[0];
        for(int i=0;i<n;i++)
        {
            if(v[i]<min_so_far)
            {
                min_so_far=v[i];
                max_so_far=v[i];
            }
            max_so_far=max(max_so_far,v[i]);
            ans=max(ans,(max_so_far-min_so_far));
        }
        return ans;
    }
};