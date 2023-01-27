//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
      vector<int>u,v;
      while(first)
      {
          u.push_back(first->data);
          first=first->next;
      }
      while(second)
      {
          v.push_back(second->data);
          second=second->next;
      }
      int i,j,k,l,m,n,p,q,r;
      p=u.size();
      q=v.size();
      r=0;
      p--;
      q--;
      vector<int>kir;
      while(p>=0 && q>=0)
      {
        k=u[p]+v[q];
        p--;
        q--;
        k+=r;
        kir.push_back(k%10);
        r=k/10;
      }
      while(p>=0)
      {
          k=u[p]+r;
          kir.push_back(k%10);
          r=k/10;
          p--;
      }
      while(q>=0)
      {
          k=v[q]+r;
          kir.push_back(k%10);
          r=k/10;
          q--; 
      }
      if(r!=0)
      kir.push_back(r);
      n=kir.size();
      for(i=n-1;i>=0;i--)
      cout<<kir[i]<<" ";
      return first;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends