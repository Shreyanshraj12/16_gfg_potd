class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
     long long int m=1000000007;
        vector<long long int> arr(n+5,0);
        arr[1]=1;arr[2]=2;arr[3]=4;
        for(int i=4 ; i<n+1 ; i++){
            arr[i]=(arr[i-1]%m+arr[i-2]%m+arr[i-3]%m)%m;
        }
        return arr[n];     
    }
};