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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        //time O(n1+n2)
        //space O(n)
        unordered_map<ln,int> mp;
        while(h1){
            mp[h1]++;
            h1=h1->next;
        }
        while(h2){
            if(mp[h2]) return h2;
            h2=h2->next;
        }
        return nullptr;
    }
};
