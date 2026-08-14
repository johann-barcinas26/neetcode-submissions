/*
    Rather than trying to find target through adding two numbers,
    how about using target to find one of the numbers.
    Remember that we are using the smaller index first
    
    So: diff = target - nums[i]
    diff is an element so nums[j]



*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int, int> seen;

        // Insert the values from array into the map
        for(int i = 0; i < size; i++) {
            seen[nums[i]] = i;
        }
        
        // Check to see if difference is an element also need to make sure that the pair is the same value
        for (int i = 0; i < size; i++) {
            int diff = target - nums[i];
            if (seen.count(diff) && seen[diff] != i) {
                return {i, seen[diff]};
            }
        }

        return {};
    }
};
