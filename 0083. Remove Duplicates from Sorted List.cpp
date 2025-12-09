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
        if(head==NULL)
            return head;
        ListNode *copy1=head;
        ListNode *copy2=copy1->next;
        while(copy2!=NULL){
            if(copy1->val==copy2->val){
                ListNode *temp=copy2;
                if(copy2->next==NULL){
                    copy1->next=NULL;
                    delete temp;
                    break;
                }else{
                    copy1->next=copy2->next;
                    delete temp;
                }
                copy2=copy1->next;
            }else{
                copy1=copy1->next;
                copy2=copy1->next;
            }
            
        }
        return head;
    }
};
