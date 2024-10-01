class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
    //Write your code here.
    int n=arr.size();
    int maxi=0,cnt=0;
    for(int i=0;i<n;i++){

        if(arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }

    }
    return maxi;
}
    
};