// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int left=0;
        int right=0;
        vector<int> v;
        
        int current_sum = 0;
        current_sum += arr[right];
        
        while(right < n){
            
                     
            if(current_sum > s){
                current_sum -= arr[left];
                left++;
                continue;
            }
            
            if(current_sum == s){
                v.push_back(left+1);
                v.push_back(right+1);
                return v;
            }
            right++;
            current_sum += arr[right];
            
        }
        v.push_back(-1);
        return v;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends