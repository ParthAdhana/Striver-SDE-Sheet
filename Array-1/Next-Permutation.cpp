class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int n=v.size();
        int itr=n;
        for(int i=n-1;i>0;i--)
        {
            if(v[i]>v[i-1])
            {
                itr=i;
                break;
            }
        }
        if(itr==n)
        {
            reverse(v.begin(),v.end());
            return;
        }
        //cout<<itr;
        reverse(v.begin()+itr,v.end());
        auto pos=upper_bound(v.begin()+itr,v.end(),v[itr-1]);
        if(pos==v.begin())
        {
            swap(v[itr-1],v[itr]);
        }
        else
        swap(v[itr-1],v[pos-v.begin()]);
        //cout<<itr<<endl;
        
    }
};