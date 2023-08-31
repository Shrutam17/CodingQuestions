class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head;
        vector <int> v;
        vector <int> v1;
        long long int count=0;
        while (temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            v1.push_back(v[i]);
        }
        for (int i=0;i<v.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        for (int i=0;i<v.size();i++)
        {
            if (v[i]==v1[i])
            {
                count++;
            }
            else count=0;
            if (count==0)
        {
            return false;
        }
        }
        
        return true;

    }
};
