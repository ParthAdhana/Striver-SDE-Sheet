class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int ans=v[0];
        int n=v.size();
        int sum_till_now=0;
        for(int i=0;i<n;i++)
        {
            sum_till_now+=v[i];
            ans=max(sum_till_now,ans);
            if(sum_till_now<0){
                //cout<<i<<endl;
                sum_till_now=0;
            }
        }
        return ans;
    }
};