//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:  
    int getMinDiff(int k, vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
      
        // If we increase all heights by k or decrease all
        // heights by k, the result will be arr[n - 1] - arr[0]
        int res = arr[n - 1] - arr[0];
    
        //  For all indices i, increment arr[0...i-1] by k and
        // decrement arr[i...n-1] by k
        for (int i = 1; i < arr.size(); i++) {
          
          
            // Minimum height after modification
            int minH = min(arr[0] + k, arr[i] - k);
          
            // Maximum height after modification
            int maxH = max(arr[i - 1] + k, arr[n - 1] - k);
    
            // Store the minimum difference as result
            res = min(res, maxH - minH);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();

    while (t--) {
        int k;
        cin >> k;
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.getMinDiff(k, arr);
        cout << res;

        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends