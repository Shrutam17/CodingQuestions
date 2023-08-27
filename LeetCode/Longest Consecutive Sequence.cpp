class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
         ll count=0;
        sort(a,a+n);
        vector <int> v;
    for(int i=0;i<n;i++)
    {
        if (a[i+1]-a[i]==1)
        {
            count++;
        }
        else 
        {
            v.push_back(count);
            count=0;
        }
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]+1<<endl;

        
    }
};



