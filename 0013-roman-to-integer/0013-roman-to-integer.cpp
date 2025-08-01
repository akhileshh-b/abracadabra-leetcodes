class Solution {
public:
    unordered_map<char,int> roman={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int romanToInt(string s) 
    {
        int res=0,i=0;
        while(i<s.length()-1)
        {
            int a=roman[s[i]];
            int b=roman[s[i+1]];
            if(a<b)
            {
                res+=(b-a);
                i+=2;
            }
            else
            {
                res+=a;
                i++;  
            }
        }
        if(i!=s.length())
        {
            res+=roman[s[i]];
        }
        return res;
    }
};

