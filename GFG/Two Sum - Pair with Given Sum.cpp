#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int i=0;
        int j=i;
        while(i<arr.size()-1){
            if(arr[i]+arr[j]==target){
                return true;
            }
            else{
                if(j==arr.size()-1){
                    i++;
                    j=i+1;
                }
                else{
                    j++;
                }
            }

        }
        return false;
    }
};

int main(){
    vector<int>ip={96569,33724,37072,73014,89574,92685,27142,22060,91807,49337,14781,91769,62848,79412,89995,88794,80029,58977,4846,58923,48903,65671,80590,36384,40036,63911,20239,36461,98173,25270,29937,54269,39216,65605,56067,48392,22598,80287,34326,80392,14744,79316,65442,39344,84189,30580,15973,55333,303,99458,61908,37851,20888,74920,80615,40930,12911,60848,27201,51565,76323,38622,57161,9734,5168,81533,90819,52019,36442,10513,54865,61641,94130,43335,14502,5244,86780,76632,27630,90520,37700,52139,76651,31929,1898,53835,96102,23121,66182,7748,87471,39833,2095,88034,45086,18721,44251,74035,6623,11421,93327,62829,62968,83268,7297,21857,59434,45261,2262,8847,73389,90868,15622,25826,22893,19732,46257,32346,28690,14649,24851,71101,58178,88904,33792,7747,99366,90242,18484,15378,24145,95917,25748,10049,27938,50841,398,452,19692,98987,27404,23093,85552,92669,48176,5022,26865,99105,98118,40844,77995,823,89306,38248,75569,35669,92560,57551,26416,33639,84080,47431,7686,98838,14507,87306,22047,55340,1057,4402,96842,21578,72774,33231,1571,86747,78048,15845,92387,40689,2998,53262,16598,98211,33386,51229,11535,16315,45037,79454,40435,69557,35465,15207,98279,23156,78015,18229,98439,28448,42572,80415,44809,69571,77594,31656,71017,51300,31434,98132,35597,20377,68728,34379,36675,40955,617,97429,37495,11056,23113,79227,84812,54592,58552,67610,31363,98666,23689,91990,80309,63364,81412,96491,95380,48348,70088,96363,7450,60450,10646,26702,82645,77138,93999,84838,99487,74212,97201,70170,63419,74616,46683,7801,47756,45515,48072,17737,68592,8187,50607,98115,11435,84423,5712,39629,46851,91030,92415,22759,19445,2527,61420,44505,19605,25205,85554,55993,45380,56452,95316,86777,89642,16134,9626,61144,95163,47618,32989,15038,16194,2034,68367,82755,40148,5538,58118,91837,5342,83274,27865,16066,78458,47187,91558,11053,86141,86192,5828,25961,90014,24744,22201,56872,13055,20117,43323,6561,36431,65690,44242,75927,15081,68699,97306,48192,86618,71663,58704,36049,24084,79385,92577,74136,55732,7463,40400,76705,24197,55343,57692,40480,82657,14267,56724,83249,81934,98864,59935,8606,51020,10157,87442,28853,45241,82714,79586,22602,11402,57943,59445,37468,97474,59123,56184,65940,64544,29925,82981,71233,73721,78802,45200,55705,86104,77834,77626,74384,29888,97683,61571,69274,86826,67988,79302,75803,81814,32795,51844,40191,81584,83307,84437,48558,84542,70805,92814,49865,69806,7260,74947,60502,49330,48219,99289,17692,75746,61697,91100,58580,42936,81925,37422,41579,55573,84943,80017,9917,23900,31820,15679,3404,85220,7612,74238,51820,21411,56661,79076,7008,88541,77844
    };
    int target=606;
    Solution obj;
    cout<<ip[48]<<endl;
    cout<<ip[481]<<endl;
    cout<<ip.size();
    //cout<<obj.twoSum(ip, target);
}