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
    ln mergeTwo(ln h1,ln h2){
        if(!h1) return h2;
        if(!h2) return h1;
        ln head = new ListNode(0);
        ln cur = head;
        while(h1 && h2){
            if(h1->val<h2->val){
                cur->next = h1;
                cur=cur->next;
                h1=h1->next;
            }
            else{
                cur->next = h2;
                cur=cur->next;
                h2=h2->next;
            }
        }
        while(h1){
            cur->next = h1;
            cur=cur->next;
            h1=h1->next;
        }
        while(h2){
            cur->next = h2;
            cur=cur->next;
            h2=h2->next;
        }
        return head->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ////using space
        // priority_queue<int,vector<int>,greater<int>> q;
        // ListNode* head = new ListNode(0);
        // ListNode* cur = head;
        // for(auto i:lists){
        //     ListNode* tmp = i;
        //     while(tmp){
        //         q.push(tmp->val);
        //         tmp=tmp->next;
        //     }
        // }
        // while(q.size()){
        //     cur->next = new ListNode(q.top());
        //     cur=cur->next;
        //     q.pop();
        // }
        // return head->next;
        //o(1) space
        if(lists.size()==0) return NULL;
        ln head = lists[0];
        for(int i=1;i<lists.size();i++){
            head = mergeTwo(head,lists[i]);
        }
        return head;
    }
};
