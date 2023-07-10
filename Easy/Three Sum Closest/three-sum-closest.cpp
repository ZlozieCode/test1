//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(arr.begin(),arr.end());
       int n=arr.size();
         bool res=false;
  vector<int> v;
  for(int i=0;i<(n-2);i++)
  {
    int a=arr[i];
    int b=i+1;
    int c=n-1;
    while(b<c)
    {
      int sum=a+arr[b]+arr[c];
      if(sum>target)
      c--;
      else if(sum<target)
      b++;
      else
      {
       res=true;
       break;
       }
       v.emplace_back(sum);
  }
}

 if(res)
 return target;
   else
   {
       int sum2;
       int res1=INT_MAX;
       for(int i=0;i<v.size();i++)
       {
           if(res1>(abs(target-v[i])))
           {
               res1=abs(target-v[i]);
               sum2=v[i];
           }
           else if(res1==(abs(target-v[i])))
           sum2=max(sum2,v[i]);
       }
       return sum2;
   }
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.

// } Driver Code Ends