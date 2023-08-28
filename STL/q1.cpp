#include <bits/stdc++.h>
using namespace std;
int getMaximumGenerated(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    vector<int> nums(n + 1);
    nums[0] = 0, nums[1] = 1;
    int max = 1;
    for (int i = 1; i < (n + 1) / 2; i++)
    {
        nums[i * 2] = nums[i];
        nums[i * 2 + 1] = nums[i] + nums[i + 1];
    }
    for (int i = 0; i < n+1; i++)
    {  
        cout<<nums[i]<<" ";
        if(nums[i]>max)
        {
            max=nums[i];
        }
        // cout<<max<<endl;
    }
    cout<<endl;
    return max;
}
int main()
{
    int n=100;
    int ans=getMaximumGenerated(n);
    cout<<ans;
}
