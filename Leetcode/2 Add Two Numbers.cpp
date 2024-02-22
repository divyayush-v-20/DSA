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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL) return NULL;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* head = new ListNode(0);
        ListNode* tmp = head;
        int carry=0,sum;
        while(l1 || l2 || carry){
            sum = carry;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2 = l2->next;
            }
            carry = sum/10;
            sum%=10;
            tmp->next = new ListNode(sum);
            tmp = tmp->next;
        }
        return head->next;
    }
};
