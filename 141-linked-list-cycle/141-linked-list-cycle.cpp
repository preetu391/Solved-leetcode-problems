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
        //using hashing
        vector<ListNode*> v;
        v.push_back(head);
        if(!head) return false;
        while(1){
            if(head->next==NULL) return false;
            head=head->next;
            vector<ListNode*>::iterator it=find(v.begin(), v.end(), head);
            if(it!=v.end()) return true;
            else v.push_back(head);
        }
        return false;
    }
};