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
#define ln ListNode
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL) return head;
        ln* retH = new ListNode(head->val);
        ln* cur = retH;
        ln* odd = head->next->next;
        ln* even = head->next;
        while(odd){
            cur->next = new ListNode(odd->val);
            cur=cur->next;
            if(odd->next) odd=odd->next->next;
            else break;
        }
        while(even){
            cur->next = new ListNode(even->val);
            cur=cur->next;
            if(even->next) even=even->next->next;
            else break;
        }
        return retH;
    }
};
