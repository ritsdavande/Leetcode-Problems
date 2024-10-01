class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int s=0;
        int sum=0;
   sum=n*(n+1);
   sum=sum/2;

        for(int i=0;i<n;i++){
             s+=arr[i];
        }
    return (sum-s);

    }
};