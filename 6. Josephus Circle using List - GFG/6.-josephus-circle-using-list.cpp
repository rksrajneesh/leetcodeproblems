// { Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int josephus(int n, int k){
    // code here
    list<int> l;
    for(int i=0;i<n;i++){
        l.push_back(i);
    }
    auto it=l.begin();
    while(l.size()>1){
        for(int i=1;i<k;i++){
            it++;
            if(it == l.end()){
                it = l.begin();
            }
        }
        it = l.erase(it);
        if(it == l.end()){
            it = l.begin();
        }
    }
    return l.front()+1;
    
}

// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    
    while(t-- > 0){
        int n,k;
        cin>>n>>k;
        
        cout<<josephus(n,k)<<"\n";
    }
    
    return 0;
}  // } Driver Code Ends