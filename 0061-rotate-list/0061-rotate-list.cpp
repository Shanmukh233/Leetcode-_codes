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
    ListNode* findnode(ListNode* temp,int k){
        int cnt=1;
        while(temp!=NULL){
            if(cnt==k) return temp;
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL|| k==0) return head;
        ListNode *tail=head;int t=1;
        while(tail->next!=NULL){
             tail=tail->next;
             t++;
        }
        if(k%t==0) return head;
        k=k%t;  
        tail->next=head;
        ListNode* temp=findnode(head,t-k);
        head=temp->next;
        temp->next=NULL;
         return head;
    }
};