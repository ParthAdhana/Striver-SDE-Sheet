class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>v;
        vector<int>temp;
        temp.push_back(1);
        v.push_back(temp);
        if(n==1)return v;
        temp.push_back(1);
        v.push_back(temp);
        for(int i=2;i<n;i++)
        {
            vector<int>temp2;
            temp2.push_back(1);
            for(int j=1;j<i;j++)
            {
                temp2.push_back(v[i-1][j-1]+v[i-1][j]);
                //temp2.push_back(1);
            }
            temp2.push_back(1);
            v.push_back(temp2);
        }
        return v;
        
    }
};