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
    bool hasCycle(ListNode *head) {
        set<ListNode*> st;
        ListNode* p=head;
        while(p) {
            if(st.count(p))
                return true;
            st.insert(p);
            p=p->next;
        }
        return false;
    }
};
