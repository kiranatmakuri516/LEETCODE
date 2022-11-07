/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
      queue<Node *>q;
      queue<Node *>ans;
      vector<int>v;
      q.push(root);
      q.push(NULL);
        if(root==0)
            return root;
      while(q.size())
      {
          Node *t=q.front();
          q.pop();
          //cout<<t<<" ";
          ans.push(t);
          if(t==NULL)
          {
              if(q.size())
                  q.push(NULL);
          }
          else
          {
             if(t->left)
                 q.push(t->left);
              if(t->right)
                  q.push(t->right);
          }
      }
      while(ans.size())
      {
          Node *t=ans.front();
          ans.pop();
          if(ans.size() && t!=NULL)
          {
              t->next=ans.front();
          }
      }
      return root;
    }
};