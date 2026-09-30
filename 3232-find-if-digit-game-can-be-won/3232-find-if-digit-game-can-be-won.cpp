class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleDigit=0;
        int doubleDigit=0;
        for(int i =0;i<nums.size();i++){
           if(nums[i]<10){
             singleDigit+=nums[i];
           }else{
            doubleDigit+=nums[i];
           }
        }

        return doubleDigit-singleDigit==0 ? false :true;
    }
};