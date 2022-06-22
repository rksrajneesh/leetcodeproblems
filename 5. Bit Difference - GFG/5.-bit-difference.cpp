// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int count=0;
        while(a>0 || b>0){
            if((a&1)!=(b&1)){
                ++count;
            }
            if(a>0){
                a=a>>1;
            }
            if(b>0){
                b=b>>1;
            }
        }
        if(a==0 && b!=0){
            ++count;
        }
        else if(b==0 && a!=0){
            ++count;
        }
        return count;
        
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends