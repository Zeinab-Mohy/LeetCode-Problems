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
    int counter(ListNode*head){
        int c=0;
        while(head!=NULL){
            head=head->next;
            c++;
        }
        return c;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return head;
        else if(k==0)
            return head;
        else if(k%counter(head)==0)
            return head;
        ListNode* copy=head;
        ListNode* pre=head;
        k%=counter(head);
        k=counter(head)-k;
        int count=1;
        while(count!=k){
            pre=pre->next;
            count++;
        }
        copy=pre->next;
        ListNode* newHead=copy;
        pre->next=NULL;
        if(copy==NULL)
            return head;
        while(copy->next!=NULL){
            copy=copy->next;
        }
        copy->next=head;
        head=newHead;
        return head;
    }
};
