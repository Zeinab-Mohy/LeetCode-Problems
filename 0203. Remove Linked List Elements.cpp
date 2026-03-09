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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* pre=NULL;
        ListNode* current=head;
        while(head!=NULL&&head->val==val){
            head=head->next;
        }
        while(current!=NULL){
            if(current->val==val&&pre!=NULL){
                pre->next=current->next;
            }else{
                pre=current;
            }
            current=current->next;
        }
        return head;
    }
};
