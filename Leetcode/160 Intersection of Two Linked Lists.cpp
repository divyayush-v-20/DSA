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
        // //time O(n1+n2)
        // //space O(n)
        // unordered_map<ln,int> mp;
        // while(h1){
        //     mp[h1]++;
        //     h1=h1->next;
        // }
        // while(h2){
        //     if(mp.find(h2)!=mp.end()) return h2;
        //     h2=h2->next;
        // }
        // return nullptr;


        // //O(1) space approach
        // int len1=0;
        // int len2=0;
        // ln t1=h1;
        // ln t2=h2;
        // while(t1){
        //     len1++;
        //     t1=t1->next;
        // }
        // while(t2){
        //     len2++;
        //     t2=t2->next;
        // }
        // if(len1>len2){
        //     return solve(h1,h2,len1-len2);
        // }
        // else return solve(h2,h1,len2-len1);
        // return nullptr;
        //most optimized solution
        ln t1=h1;
        ln t2=h2;
        if(t1==t2) return t1;
        while(t1!=t2){
            if(!t1) t1=h1;
            if(!t2) t2=h2;
            if(t1==t2) return t1;
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
        
    }
    ln solve(ln h1,ln h2,int diff){
        //2 pointer O(1) space approach
        ln t1=h1;
        ln t2=h2;
        while(diff--){
            t1=t1->next;
        }
        while(t1 && t2){
            if(t1==t2) return t1;
            t1=t1->next;
            t2=t2->next;
        }
        return nullptr;
    }
};
