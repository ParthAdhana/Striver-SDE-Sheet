class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        int flag=0,flag2=0;
        if(v[0][0]==0)flag2=1;
        for(int i=0;i<n;i++)
        {
            if(v[i][0]==0)
            {
                flag=1;
                break;
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(i==0)
                {
                    if(v[i][j]==0)
                    {
                        v[0][0]=0;
                    }
                }
                else if(v[i][j]==0)
                {
                    
                    v[i][0]=0;
                    v[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            if(v[i][0]==0)
            {
                for(int j=0;j<m;j++)
                {
                    v[i][j]=0;
                }
            }
        }
        for(int j=1;j<m;j++)
        {
            if(v[0][j]==0)
            {
                for(int i=0;i<n;i++)
                {
                    v[i][j]=0;
                }
            }
        }
        if(v[0][0]==0){
            
        for(int j=0;j<m;j++)
            v[0][j]=0;}
    
        if(flag2)
        {
            for(int i=0;i<n;i++)
            {
                v[i][0]=0;
            }
            for(int j=0;j<m;j++)
            {
                v[0][j]=0;
            }
        }
        if(flag)
        {
            for(int i=0;i<n;i++)
            {
                v[i][0]=0;
            }
        }
        
    }
};