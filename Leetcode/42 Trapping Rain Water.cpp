//brute force(runs 319/322 test-cases)
class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        for(int i=0;i<height.size();i++){
            int x = i,leftMax=0,rightMax=0;
            while(x<height.size()){
                rightMax = max(rightMax,height[x]);
                x++;
            }
            x=i;
            while(x>=0){
                leftMax = max(leftMax,height[x]);
                x--;
            }
            ans+=min(leftMax,rightMax) - height[i];
        }
        return ans;
    }
};
