#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class First_Missing_Positive {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        for(int i=0;i<nums.size(); i++){
            if(nums[i]<=0){
                nums.erase(nums.begin()+i); 
                i--;
            }
        
        }
        if(nums[0]>1 || nums.size()==0){
            return 1;
        }
       if (nums[0] == 1) {
        int sum = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
            continue;
        }
        
        sum++;
        if (sum != nums[i]) {
            return sum;
        }
    }
    return nums.back() + 1;
}

    return 1;       
    }
    
    
};

int main(){
    //[1,2,0]
    First_Missing_Positive obj;
    vector<int> dummy={0,2,2,1,1};
    cout<<obj.firstMissingPositive(dummy);

}