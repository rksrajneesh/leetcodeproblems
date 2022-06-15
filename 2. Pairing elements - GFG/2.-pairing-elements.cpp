// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

/*
array_of_Pairs(arr, N): function which returns the array of pairs
arr[]: contains elements of given array
N: sze of array
*/
vector<pair<int, int>> array_of_Pairs(int arr[], int N)
{
    // your code here
    vector<pair<int,int>> v;
    for(int i=0;i<N;i++){
        if(i<N/2){
            v.push_back({arr[i],arr[N-i-1]});
        }
        else if(N%2!=0){
            v.push_back({arr[i],arr[i]});
            break;
        }
    }
    
    //Return a vector of pairs
    return v;
    
    
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int N;
        
        // Input size of array
        cin>>N;
        
        int arr[N];
        // Input array elements 
        for(int i = 0; i < N; i++)
            cin>>arr[i];
        
        // Store the result in vector of pair
        vector<pair<int, int>> res = array_of_Pairs(arr, N);
        
        for(int i = 0; i < res.size(); i++)
        {
            cout << "("<< res[i].first << "," <<res[i].second << ") ";
        }
        cout << endl;
        
    }
    return 0;
}




















  // } Driver Code Ends