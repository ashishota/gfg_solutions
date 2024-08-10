//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        // Complete the function
        map<int,int> preSumMap;
        int maxlen=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum==k){
                maxlen=max(maxlen,i+1);
            }
            int rem=sum-k;
            if(preSumMap.find(rem)!=preSumMap.end()){
                int len=i-preSumMap[rem];
                maxlen=max(maxlen,len);
            }
            if(preSumMap.find(sum)==preSumMap.end()){
                preSumMap[sum]=i;
            }
            
        }
        return maxlen;

    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends