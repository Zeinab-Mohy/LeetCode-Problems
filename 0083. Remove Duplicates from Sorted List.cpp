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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *h=head;
        ListNode *e=head;
        ListNode *e2=head;
        if(head!=NULL){
            e2=e2->next;
        }
        while(e!=NULL&&e2!=NULL){
            if(e->val==e2->val){
                cout<<e->val<<" "<<e2->val<<"\n";
                e->next=e2->next;
                e2=e2->next;
            }else{
                e=e->next;
                e2=e2->next;
            }
            
        }
        return h;
    }
};
