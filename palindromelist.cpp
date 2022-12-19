/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    struct ListNode*t=head;
    int i;
    vector<int>v;
    vector<int>r;
    while(t!=NULL)
    {
        v.push_back(t->val);
        t=t->next;
    }
    r=v;
    reverse(r.begin(),r.end());
    for(i=0;i<v.size();i++)
    {
        if(v[i]!=r[i])
        return false;

    }
    return true;
    
    }
};