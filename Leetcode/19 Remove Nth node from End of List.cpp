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
    int len(ListNode* &head){
        ListNode* tmp = head;
        int ans = 0;
        while(tmp!=nullptr){
            ans++;
            tmp = tmp->next;
        }
        return ans;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = len(head);
        if(n==l){
            ListNode* d = head->next;
            delete head;
            return d;
        }
        ListNode* curr = head;
        for(int i=0;i<l;i++){
            if(i==l-n-1){
                ListNode* x = curr->next;
                curr->next = curr->next->next;
                delete x;
                break;
            }
            curr = curr->next;
        }
        return head;
    }
};