//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
   long long ans=-1;
    vector<int> Edge;
    vector<bool> visit;
    vector<long long> inc;
    int summ=0;
  void solve(int i,long long sum)
    {
        
      if(inc[i]>-1)

      {

          ans=max(ans,sum-inc[i]+i);

          return;

      }

      

      if(visit[i]==true)

        return;

        

      visit[i]=true;

      inc[i]=sum+i;

      

      if(Edge[i]!=-1)

        solve(Edge[i],sum+i);
    
        
            summ+=i;
        if(summ==i)
        {
            summ=0;
        }
      inc[i]=-1;

  }

  

  long long largestSumCycle(int N, vector<int> Edges)

  {
        for(int i=0;i<N;i++)
        {
            visit.push_back(false);
            inc.push_back(-1);
        }
        Edge=Edges;

        

        for(int i=0;i<N;i++)
        {

            if(visit[i]==false)

                solve(i,0);

        }

        return ans;
  }
};

//{ Driver Code Starts.
signed main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      long long ans=obj.largestSumCycle(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends