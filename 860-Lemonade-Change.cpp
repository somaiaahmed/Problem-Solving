class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int fiveDollar = 0;
        int tenDollar = 0;

        for(int i=0;i<bills.size();i++){
            if( bills[i]==5)
                fiveDollar++;

            else if(bills[i]==10){

                if(fiveDollar>0){
                    fiveDollar--;
                    tenDollar++;
                }
                    
                else{
                    return false;
                 }
            }
            else 
            {
                if(tenDollar > 0 && fiveDollar >0){
                    tenDollar--;
                    fiveDollar--;
                }
                else if(fiveDollar>=3){

                
                    fiveDollar-=3;
                }
                else
                 return false;
                
            }

        }
        
        return true;

       
    }
};