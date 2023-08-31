class Solution {
public:
    int getDecimalValue(ListNode* head) {
    ListNode *temp=head;
    vector <int> v;
    long long int ans=0;
    while(temp)
    {
        v.push_back(temp->val);
        temp=temp->next;
    }      
    for (int i=0;i<v.size();i++)
    {
        if (v[i]==1)
        {
            ans = ans+pow(2,v.size()-i-1);
        }
    }
    return ans;
        
    }
};
