class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         
        if(k<=1){
            return 0;
        }
        
        int n=nums.size();//4
//         10 5 2 6
        int l=0,cnt=0,product=1;
        for(int r=0;r<n;r++){
            product=product*nums[r];//1*10-->10*5*2-->100
            while(product>=k){
                product/=nums[l];//100/10-->10
                l++;
                
            }
            cnt+=(r-l+1);//1+2-->3
             
            
        }
        
        
        return cnt;
        
       
        
    }
};