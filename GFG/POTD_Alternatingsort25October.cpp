#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class AlternatingSort{
    public:
        
        vector<int> alternateSort(vector<int>& arr){
        vector<int>result;
        int mid_point;
        int n=arr.size();
        int a=0;
        int b=0;
        vector<int>largest_numbers;
        vector<int>smallest_numbers;
        sort(arr.begin(), arr.end());
        mid_point = n / 2;
        for(int i=0;i<n;i++){
            if(i<mid_point){
                smallest_numbers.push_back(arr[i]);
                }
            else{
                largest_numbers.push_back(arr[i]);
                }
            }
        reverse(largest_numbers.begin(), largest_numbers.end());
        for(int i=0; i<smallest_numbers.size()+largest_numbers.size(); i++){
            if(i%2==0){
                    result.push_back(largest_numbers[a]);
                    a++;
                }
            else{
                    result.push_back(smallest_numbers[b]);
                    b++;
                }
            }
            return result;
        }
};


int main(){
    AlternatingSort obj;
    vector<int> a={7, 1, 2, 3, 4, 5, 6};
    vector<int> res=obj.alternateSort(a);
    for(int x: res){
        cout<<x<<endl;
    }
}