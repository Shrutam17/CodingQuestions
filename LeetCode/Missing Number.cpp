#define ll long long int
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        ll n=nums.size();
        ll sum=n*(n+1)/2;
        ll sum1=0;
        for (int i=0;i<nums.size();i++)
        {
            sum1=sum1+nums[i];
        }
        ll x=sum-sum1;
        return x;
    }
};
