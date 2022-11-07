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
    ListNode* reverseList(ListNode* head) {
        vector<int>v;
        while(head)
        {
            v.insert(v.begin(),head->val);
            head=head->next;
        }
        ListNode *root,*temp,*new1;
        root=0;
        int i,n=v.size();
        for(i=0;i<n;i++)
        {
           new1=new(ListNode);
            new1->val=v[i];
            new1->next=0;
          if(root==0)
          {
              root=temp=new1; 
          }
            else
            {
                temp->next=new1;
                temp=new1;
            }
        }
        return root;
    }
};