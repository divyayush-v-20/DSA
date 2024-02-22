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
    bool isPalindrome(ListNode* head) {
        if(head==NULL) return false;
        if(head->next==NULL) return true;
        ln* cur = head;
        vector<int> arr;
        while(cur){
            arr.push_back(cur->val);
            cur = cur->next;
        }
        int l=0,h=arr.size()-1;
        while(l<=h){
            if(arr[l]!=arr[h]) return false;
            l++;
            h--;
        }
        return true;
    }
};
