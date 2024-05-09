class Solution {
public:
    long long maximumHappinessSum(vector<int>& hap, int k) {
        int n=hap.size();
        sort(hap.begin(),hap.end(),greater<int>());
        long long count=0;
        long long sum=0;
        long long maxi=INT_MIN;
        int i=0;
        while(k!=0&& i< hap.size()){
            sum=sum+hap[i]-count;
            maxi=max(maxi,sum);
            count+=1;
            i++;
            k--;
        }
        
       
        return maxi;
    }
};