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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> q;
        ListNode* head = new ListNode(0);
        ListNode* cur = head;
        for(auto i:lists){
            ListNode* tmp = i;
            while(tmp){
                q.push(tmp->val);
                tmp=tmp->next;
            }
        }
        while(q.size()){
            cur->next = new ListNode(q.top());
            cur=cur->next;
            q.pop();
        }
        return head->next;
    }
};
