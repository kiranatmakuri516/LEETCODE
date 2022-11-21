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
    ListNode* mergeKLists(vector<ListNode*>& a) {
      vector<int>v;
      for(auto i:a)
      {
             ListNode *kir=i;
             while(kir)
             {
             v.push_back(kir->val);
                 kir=kir->next;
             }
      }
        sort(v.begin(),v.end());
        ListNode *root,*temp,*new1;
        root=0;
        for(auto i:v)
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