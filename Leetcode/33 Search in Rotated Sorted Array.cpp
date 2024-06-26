#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,m;
        while(s<=e){
            m = s+(e-s)/2;
            if(nums[m]==target) return m;
            //check if left part is sorted
            if(nums[s]<=nums[m]){
                if(target>=nums[s] && target<=nums[m]){
                    e=m-1;
                }
                else{
                    s=m+1;
                }
            }
            //check if right part is sorted
            else{
                if(target>=nums[m] && target<=nums[e]){
                    s=m+1;
                }
                else{
                    e=m-1;
                }
            }
        }
        return -1;
    }
};