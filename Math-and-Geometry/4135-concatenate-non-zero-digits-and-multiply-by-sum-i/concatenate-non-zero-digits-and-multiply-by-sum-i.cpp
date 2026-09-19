class Solution {
public:
long long sum=0;
long long no=0;
vector<int> arr;
void func(int n)
{
    while(n>0)
    {
        sum=sum+(n%10);
        if((n%10)!=0)
        {
            arr.push_back(n%10);
        }
        n=n/10;
    }
    for(int i=arr.size()-1;i>=0;i--)
    {
        no=(no*10)+arr[i];
    }
}
    long long sumAndMultiply(int n) {
        func(n);
        return sum*no;
    }
};