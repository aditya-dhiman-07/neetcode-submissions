class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<long,long> mpp;
        for (int i = 0 ; i<nums.size() ; i++){
            mpp[nums[i]]++;
        }
        for(auto const& [key, val] : mpp){
            if (val > (nums.size()/2))
                return key;
        }
        return 0;
    }
};