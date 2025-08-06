class Solution {
private:
    vector<int> nextGreaterElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            res[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return res;
    }

    vector<int> previousGreaterElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }
            res[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return res;
    }

    vector<int> nextSmallerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            res[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return res;
    }

    vector<int> previousSmallerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            res[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return res;
    }

public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> NGE = nextGreaterElement(nums);
        vector<int> PGE = previousGreaterElement(nums);
        vector<int> NSE = nextSmallerElement(nums);
        vector<int> PSE = previousSmallerElement(nums);

        long long maxSum = 0, minSum = 0;

        for (int i = 0; i < n; i++) {
            long long leftMax = i - PGE[i];
            long long rightMax = NGE[i] - i;
            maxSum += 1LL * nums[i] * leftMax * rightMax;

            long long leftMin = i - PSE[i];
            long long rightMin = NSE[i] - i;
            minSum += 1LL * nums[i] * leftMin * rightMin;
        }

        return maxSum - minSum;
    }
};
