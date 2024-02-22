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
#define ln ListNode*
    bool hasCycle(ListNode *head) {
        ln cur = head;
        ln fwd = head;
        while(fwd && fwd->next){
            cur = cur->next;
            fwd = fwd->next->next;
            if(fwd==cur) return true;
        }
        return false;
    }
};
