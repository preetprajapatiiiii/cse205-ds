class Solution {
public:
    
    void merge(vector<int>& nums, int s, int e) {
        int mid = s + (e - s) / 2;
        int len1 = mid - s + 1;
        int len2 = e - mid;

        vector<int> first(len1);
        vector<int> second(len2);

        int index = s;

        for (int i = 0; i < len1; i++) {
            first[i] = nums[index++];
        }
        index = mid+1; 

        for (int i = 0; i < len2; i++) {
            second[i] = nums[index++];
        }

        index = s;

        int index1 = 0;
        int index2 = 0;

        while (index1 < len1 && index2 < len2) {
            if (first[index1] < second[index2]) {
                nums[index++] = first[index1++];
            } else {
                nums[index++] = second[index2++];
            }
        }

        while (index1 < len1) {
            nums[index++] = first[index1++];
        }
        while (index2 < len2) {
            nums[index++] = second[index2++];
        }
    }

    void mergeSort(vector<int>& nums, int s, int e) {
        if (s >= e) {
            return;
        }

        int mid = s + (e - s) / 2;

        mergeSort(nums, s, mid);
        mergeSort(nums, mid + 1, e);

        merge(nums, s, e);
    }

    vector<int> sortArray(vector<int>& nums) {
        int l = nums.size();

        mergeSort(nums, 0, l - 1);
        return nums;
    }
};
