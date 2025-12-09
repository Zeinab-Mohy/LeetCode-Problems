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
    void sort(ListNode *&head){
        ListNode*copy1=head;
        while(copy1!=NULL){
            ListNode *copy2=copy1->next;
            while(copy2!=NULL){
                if(copy1->val>copy2->val){
                    swap(copy1->val,copy2->val);
                }
                copy2=copy2->next;
            }
            copy1=copy1->next;
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) 
            return list2; 
        if(list2==NULL) 
            return list1;
        ListNode *tail=list1;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=list2;
        sort(head);
        return head;
    }
};
