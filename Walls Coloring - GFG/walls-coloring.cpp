//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
        int p=colors[0][0],b=colors[0][1],y=colors[0][2];

        for(int i=1;i<N;i++){
            int a=min(b,y)+colors[i][0];
            int c=min(p,y)+colors[i][1];
            y=min(b,p)+colors[i][2];
            p=a;
            b=c;
        }

        int x=min(p,b);

        return min(x,y);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends