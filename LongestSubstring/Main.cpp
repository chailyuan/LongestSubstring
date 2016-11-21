#include <string>
#include <math.h>

using namespace std;


class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int count[256]={0};
		int length = s.length();
		int maxlength=1;
		if (length<=1)
		{
			return length;
		}

		for (int i = 0; i < length-maxlength;++i)
		{
			memset(count,0,256*sizeof(int));
			int j =i;
			for (;j<length;++j)
			{
				if (count[s[j]]++ == 1)
				{
					maxlength = max(maxlength,j-i);
					break;
				}
			}
			if (j==length)
			{
				maxlength = max(maxlength,j-i);
			}
		}
		return maxlength;
	}
};

int main()
{
	Solution s;

	string str = "abcdabcbb";

	int j=0;
	if (j++==0)
	{
		j=0;
	}

	int r = s.lengthOfLongestSubstring(str);
}