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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *kdummy=head, *k2=head, *k1=NULL;
        while(--k){
            kdummy=kdummy->next;
        }
        k1=kdummy;
        kdummy=kdummy->next;
        while(kdummy!=NULL){
            kdummy=kdummy->next;
            k2=k2->next;
        }
        swap(k1->val, k2->val);
        return head;
    }
};