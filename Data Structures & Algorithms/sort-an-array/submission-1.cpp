class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        quickSort(nums,0,n-1);
        return nums;
    }
    int partition(vector<int> &vec, int low, int high){
        int pvt = vec[high];
        int i =  low-1;
        for (int j = low; j<high;j++){
            if(vec[j]<pvt){
                i++;
                swap(vec[i],vec[j]);
            }
        }
        swap(vec[i+1],vec[high]);
        return i+1;
    }
    void quickSort(vector<int> &vec, int low, int high){
        if(low<high){
            int pi = partition(vec, low, high);
            quickSort(vec, low, pi - 1);
            quickSort(vec, pi + 1, high);
        }
    }

};