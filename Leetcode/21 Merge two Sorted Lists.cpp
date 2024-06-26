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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return list1;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* head = new ListNode(0);
        ListNode* tmp = head;
        while(list1 && list2){
            if(list1->val<=list2->val){
                tmp->next = list1;
                list1 = list1->next;
            }
            else{
                tmp->next = list2;
                list2 = list2->next;
            }
            tmp = tmp->next;
        }
        while(list1){
            tmp->next = list1;
            list1 = list1->next;
            tmp = tmp->next;
        }
        while(list2){
            tmp->next = list2;
            list2 = list2->next;
            tmp = tmp->next;
        }
        return head->next;
    }
};
