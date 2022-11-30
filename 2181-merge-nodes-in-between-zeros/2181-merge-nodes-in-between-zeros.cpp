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
    ListNode* mergeNodes(ListNode* head) {
      vector<int>v;
      while(head)
      {
          v.push_back(head->val);
          head=head->next;
      }
      ListNode *root,*temp,*new1;
        root=0;
      int n=v.size(),i,p,q;
        p=0;
        q=0;
      for(i=0;i<n;i++)
      {
        q+=v[i];
          if(v[i]==0)
          {
              p++;
             if(p==2)
             {
                p=1;
                new1=new(ListNode);
                 new1->val=q;
                 q=0;
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
          }
          else if(p==0)
          {
             new1=new(ListNode);
                 new1->val=v[i];
                 q=0;
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
      }
        return root;
    }
};