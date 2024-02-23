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
#define ln ListNode*
    int len(ln head){
        ln tmp = head;
        int ans = 0;
        while(tmp){
            ans++;
            tmp=tmp->next;
        }
        return ans;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        int x = k%len(head);
        while(x--){
            ln hd = head;
            ln last = head;
            while(last->next){
                last = last->next;
            }
            while(hd->next->next){
                hd = hd->next;
            }
            hd->next = NULL;
            last->next = head;
            head = last;
        }
        return head;
    }
};
