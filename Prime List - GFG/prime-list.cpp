//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
    bool fun(int n)
    {
        if(n==1)
        return 0;
        if(n==2 || n==3 || n==5)
        return 1;
        if(n%2==0 || n%3==0)
        return 0;
        for(int i=5;i*i<=n;i=i+6)
        {
            if(n%i==0 ||n%(i+2)==0 )
            return 0;
        }
        return 1;
    }
    Node *primeList(Node *head){
        Node *temp=head;
      while(head)
      {
          int p,q,r,s,t,u,v;
          p=head->val;
          q=p;
          r=p;
          while(true)
          {
            if(fun(q))
            {
                head->val=q;
                break;
            }
            if(fun(r))
            {
                head->val=r;
                break;
            }
            q--;
            r++;
          }
          head=head->next;
      }
    
       return temp;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends