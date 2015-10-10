#include<iostream>
#include<math.h>
using namespace std;
class Solution
{
public:
	int hammingWeight(unsigned long n)
	{
		int i;
		int num=0;
		while(n!=0)
		{
			n=n&n-1;
			++num;
		}
		return num;
		/*
		int left;
		while(n!=0)
		{
			left = n & 0x1;
			re += left;
    		n = n >> 1;
		}
		*/
	}
};
int main()
{
	unsigned long k;
	k = 00000000000100001000000000001011;
	int num;
	Solution result;
	num = result.hammingWeight(k);
	cout<<num<<endl;
	return 0;
}