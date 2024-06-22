#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long ExtractNumber(string sentence) {

        // codeGenius
        regex re("\\d+");
        smatch match;
        string s=sentence;
        vector<string> store;
        while(regex_search(s,match,re)){
            store.push_back(match.str());
            s=match.suffix().str();
        }
        long long ans=-1;
        long long temp= LLONG_MIN;
        for(const auto& num : store){
            if(num.find('9')==string::npos){
                long long numValue=stoll(num);
                if(temp<numValue){
                    ans=numValue;
                    temp=numValue;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends