vector<int> Solution::repeatedNumber(const vector<int> &v) {
    int n=v.size();
    long long int sum_till_n=n*(n+1);
    sum_till_n/=2;
    long long int sum_array=0;
    long long int sum_till_n2=n*(n+1)*(2*n+1);
    sum_till_n2/=6;
    long long int sum_array_n2=0;
    for(long long int i : v)
    {
        sum_array+=i;
        sum_array_n2+=i*i;
    }
    // a -repeating b-missing 
    // sum_till_n-sum_array==a-b;
    // sum_till_n2 - sum_array_n2=(a+b) * (a-b)
    
    long long int x=sum_till_n-sum_array;
    long long int y=sum_till_n2-sum_array_n2;
    
    long long int z=y/x;
    //z=a+b;
    
    long long int a=z-x;
    a/=2;
    long long int b=z-a;
    vector<int>ans={a,b};
    
    return ans;
}
