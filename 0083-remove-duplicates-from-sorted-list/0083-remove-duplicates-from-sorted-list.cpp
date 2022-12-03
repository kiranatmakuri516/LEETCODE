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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int>s;
     while(head)
     {
       s.insert(head->val);
         head=head->next;
     }
        ListNode *root,*temp,*new1;
        root=0;
        for(auto i:s)
        {
            new1=new(ListNode);
            new1->val=i;
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