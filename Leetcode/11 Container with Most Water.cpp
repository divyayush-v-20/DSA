class Solution {
public:
    
    int maxArea(vector<int>& arr) {
        int left = 0,right = arr.size() - 1;
        int ar,ans = 0;
        while(left<right){
            ar = min(arr[left],arr[right])*(right-left);
            if(ar>ans) ans = ar;
            if(min(arr[left],arr[right])==arr[left]) left++;
            else right--;
        }
        return ans;
    }
};
