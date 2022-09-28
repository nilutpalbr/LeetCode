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
    int count(ListNode* head){
        int len=0;
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=count(head); int ans=size-n; int i=1;
        ListNode* temp=head;
        if(n==size){
            return temp->next;
        }
        while(i<ans){
            temp=temp->next; i++;
        }
        if(n==1){
            temp->next=NULL;
        } else{
            ListNode* curr=temp->next->next;
            temp->next=curr;
        }
        return head;
    }
};