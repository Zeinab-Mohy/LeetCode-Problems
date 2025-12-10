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
    void insertAtBeg(ListNode *&head,int val){
        ListNode*n=new ListNode;
        n->val=val;
        n->next=NULL;
        if(n==NULL){
            head=n;
        }else{
            n->next=head;
            head=n;
        }
    }
    bool isPalindrome(ListNode* head) {
        ListNode*copy=head;
        ListNode*tail=NULL;
        while(copy!=NULL){
            insertAtBeg(tail,copy->val);
            copy=copy->next;
        }
        while(tail!=NULL){
            if(tail->val!=head->val){
                return 0;
            }
            tail=tail->next;
            head=head->next;
        }
        return 1;
    }
};
