#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
long long getInversions(long long *arr, int n){
    // Write your code here.
    pbds A;
    long long int ans=0;
    map<long long ,long long >mp;
    for(int i=0;i<n;i++)
    {
        long long int sz=A.size();
        long long int small=A.order_of_key(arr[i]);
        ans+=sz-(small+mp[arr[i]]);
        A.insert(arr[i]);
        mp[arr[i]]++;
    }
    return ans;
}