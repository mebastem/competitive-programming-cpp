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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
        vector<int> vals;
        ListNode* temp=head;
        while(temp!=NULL) {
            vals.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* ans=new ListNode(vals.back());
        ListNode* curr=ans;
        for(int i=vals.size()-2; i>=0; i--) {
            curr->next=new ListNode(vals[i]);
            curr=curr->next;
        }
        return ans;
    }
};
