class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<pair<int,int>, int>> arr(n);

        for (int i = 0; i < n; i++) {
            arr[i] = {{digitSum(nums[i]), nums[i]}, i};
        }

        sort(arr.begin(), arr.end());

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || arr[i].second == i)
                continue;

            int cycle_size = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = arr[j].second;
                cycle_size++;
            }

            if (cycle_size > 1)
                swaps += (cycle_size - 1);
        }

        return swaps;
    }
};


int main(){
    Solution obj;
    vector<int>arr={18,43,34,16};
    cout<<obj.minSwaps(arr)<<endl;
    return 0;
}