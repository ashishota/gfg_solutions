//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function template in C++

class Solution {
  public:
    //Function to calculate the sum in the given matrix.
    long long sumMatrix(long long n, long long q) {
        
        long long ans;
        
        //if q is greater than 2*n, return 0 as there won't be any elements
        //in the matrix.
        if(q > 2*n)
            return 0ll;
        
        //if n is greater than or equal to q, calculate ans as q-1.
        else if(n >= q)
            ans = q-1;
        //if n is less than q, calculate ans as 2*n - q + 1.
        else
            ans = (2*n) - q + 1;
            
        //returning the answer.
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends