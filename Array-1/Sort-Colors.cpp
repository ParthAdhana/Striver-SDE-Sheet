class Solution {
public:
    void sortColors(vector<int>& v) {
        int n=v.size();
        int pt0=0,pt1=0,pt2=n-1;
        while(pt1<=pt2)
        {
            cout<<pt0<<' '<<pt1<<' '<<pt2<<endl;
            for(auto i : v)
            cout<<i<<' ';
            cout<<endl;
            cout<<endl;
            
            if(v[pt1]==0)
            {
                swap(v[pt1],v[pt0]);
                pt0++;
                pt1++;
            }
            else if(v[pt1]==1)
            {
                pt1++;
            }
            else if(v[pt1]==2)
            {
                swap(v[pt1],v[pt2]);
                pt2--;
            }
            
           
        }
        cout<<pt0<<' '<<pt1<<' '<<pt2<<endl;
        
    }
};