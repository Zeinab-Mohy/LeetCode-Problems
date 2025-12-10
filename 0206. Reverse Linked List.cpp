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
    void insertAetBeg(ListNode *&head,int val){
        ListNode *n=new ListNode;
        n->val=val;
        n->next=NULL;
        if(head==NULL){
            head=n;
        }else{
            n->next=head;
            head=n;
        }
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* tail=NULL;
        while(head!=NULL){
            insertAetBeg(tail,head->val);
            head=head->next;
        }
        return tail;
    }
};
