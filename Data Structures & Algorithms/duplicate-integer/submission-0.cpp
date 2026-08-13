class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uniqueNums;

        for (int i = 0; i < nums.size(); i++) {
            auto [iterator, success] = uniqueNums.insert(nums[i]);
            if (!success) { return true; }
        }
        return false;
    }
};

/*
    Solution: Bruteforce could take a long time. Need to use a hash set or map

    Initilize hash set
    Loop through the vector
    If the element in nums is already present in unique nums
        return false
*/
