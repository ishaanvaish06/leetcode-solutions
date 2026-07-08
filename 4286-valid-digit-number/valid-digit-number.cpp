class Solution {
public:
int count=0;
bool first=false;
    bool validDigit(int n, int x) {
        while(n>0)
        {
            int z=n%10;
            if(z==x && n/10!=0)
            {
                count++;
            } 
            else if(z==x && n/10==0)
            {
                first=true;
                break;
            }
            n=n/10;
        }
        return (first==false && count>0)? true:false;
    }
};