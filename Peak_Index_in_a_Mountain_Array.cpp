class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, up = arr.size()-2, mid;
        
        while(low < up) {
            mid = (low + up) / 2;
            if(arr[mid] < arr[mid+1])
                low = mid+1;
            else
                up = mid;
        }
        return low;
    }
};
