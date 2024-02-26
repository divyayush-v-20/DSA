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
    ListNode *detectCycle(ListNode *head) {
       ln t1 = head;
       ln t2 = head; 
       while(t2&&t2->next){
           t1=t1->next;
           t2=t2->next->next;
           if(t1==t2) break;
       }
        if(!(t2&&t2->next)) return NULL;
        while(head!=t1){
            head=head->next;
            t1=t1->next;
        }
        return head;
    }
};
