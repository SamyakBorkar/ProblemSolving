//4. Median of Two Sorted Arrays
/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)). */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class SortedVectorClass{
    public:
        double Sortedvector(vector<int>&nums1, vector<int>&nums2){
            // cout<<m<<endl<<n;
            vector<int> SvVector={};
            SvVector.insert(SvVector.begin(), nums1.begin(), nums1.end());
            SvVector.insert(SvVector.end(), nums2.begin(), nums2.end());
            sort(SvVector.begin(), SvVector.end());

            // for(int i : SvVector){
            //      cout<<i<<endl;
            //  }
            int k =SvVector.size();
           // cout<<k<<endl;
            if(k%2==0){
                int n1=k/2;
                int n2=k/2 -1;
                return (SvVector[n1]+SvVector[n2])/2.0;
            }
            else{
                int odd= k/2;
                 return SvVector[odd];   
            }
    }   
};
int main(){
    SortedVectorClass obj;
    vector<int> nums1 = {1,3,5,6,7};
    vector<int> nums2 = {2,4,8,9,13};
     double result=  obj.Sortedvector(nums1, nums2);
     cout<< result<<endl;
    
}
