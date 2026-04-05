/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int la=0, lb=0;
        ListNode* temp=headA;
        while(temp!=NULL){
            la++;
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL){
            lb++;
            temp=temp->next;
        }
        int d=abs(la-lb);
        if(la>lb) {
            while((d--))
                headA=headA->next;
        }
        else if(lb>la) {
            while(d--) {
                headB=headB->next;
            }
        }
        while(headA!=NULL&&headB!=NULL) {
            if(headA==headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};
