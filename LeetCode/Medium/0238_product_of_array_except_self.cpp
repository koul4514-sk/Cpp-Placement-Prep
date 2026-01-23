class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>answer(nums.size());
        
     
        long long prefix1=1;
        vector<int>prefix(nums.size());
        vector<int>suffix(nums.size());
        for(int i=0;i<nums.size();i++){
            if(i==0){
            prefix[0]=1;    
            }
            else{

             prefix1*=nums[i-1];
             prefix[i]=prefix1;
        }

        }
        long long suffix1=1;
        for(int i=nums.size()-1;i>=0;i--){
            if(i==nums.size()-1){
                suffix[i]=1;
               

            }
            else{
             suffix1*=nums[i+1];
                suffix[i]=suffix1;
            
            }

        }
        for(int i=0;i<nums.size();i++){
            answer[i]=prefix[i]*suffix[i];
        }

        
        return answer;
        
    }
};
