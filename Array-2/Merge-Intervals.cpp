class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>>ans;
        sort(v.begin(),v.end());
        int n=v.size();
        int start=v[0][0];
        int end=v[0][1];
        for(int i=1;i<n;i++){
            int temp_start=v[i][0];
            int temp_end=v[i][1];
            if(temp_start>end)
            {
                ans.push_back({start,end});
                start=temp_start;
                end=temp_end;
            }
            else
            {
                end=max(end,temp_end);
            }
        }
        ans.push_back({start,end});

        return ans;
    }
};