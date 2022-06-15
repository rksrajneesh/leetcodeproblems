// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void sortArray(int a[], char b[], int n){
    
    // code here
    pair<int, int> arr_p[n];
    
    // Fill the array of pairs such that 
    // first element of pair is the elements of a[]
    // second element of pair is the corresponding
    // element of array b[]
    for(int i = 0; i < n; i++)
    {
        arr_p[i].first = a[i];
        arr_p[i].second = b[i];
    }
    
    // Sort the array of pairs
    // By default, the sort function sorts a 
    // container by first element
    sort(arr_p, arr_p + n);
    
    for(int i = 0; i < n; i++)
    {
        b[i] = arr_p[i].second;
    }
    
    // Print the elements of pairs
    for(int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    
}


// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        
        char b[n];
        for(int i = 0;i < n; i++){
            cin>>b[i];
        }
        
        sortArray(a, b, n);
        
        
        cout<<"\n";
    }
}  // } Driver Code Ends