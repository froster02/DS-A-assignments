class NumArray {
public:
    vector<int> kadane;
    NumArray(vector<int>& nums) {
        kadane.push_back(0);
        for(auto i = 0; i < nums.size(); i++){
            int sum = nums[i] + kadane[i];
            kadane.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        return kadane[right+1] - kadane[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */