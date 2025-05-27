class Solution {
public:
    bool twenty(int& c5, int& c10, int& c20){
        c20++;
        if( c5>=1 && c10>=1){
            c5=c5-1;
            c10=c10-1;
            return true;
        }
        else if(c5 >=3){
            c5= c5-3;
            return true;
        } 
        return false;
    }
    bool ten(int& c5,int& c10){
        c10++;
        if(c5>=1){
            c5 = c5-1;
            return true;
        }
        else{
            return false;
        }
    }
    void five(int& c5){
        c5++;
    }

    bool lemonadeChange(vector<int>& bills) {
        int c5=0,c10=0,c20=0;
        for(int i=0;i<bills.size();i++){
            if(bills.at(i)==5){
                five(c5);
            }
            else if(bills.at(i)==10 && ten(c5,c10) == false){
                return false;
            }
            else if(bills.at(i) == 20 && twenty(c5,c10,c20) == false){
                return false;
            }
            }
            return true;
    };
};