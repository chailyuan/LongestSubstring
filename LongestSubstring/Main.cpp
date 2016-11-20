#include <string>

using namespace std;


class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int length = s.length();
		int max=0;
		if (length<=1)
		{
			return length;
		}
		
		for (int i = 0; i < length;i++)
		{
			for (int j = i+1; j < length;j++)
			{
				for (int k = i; k < j;k++)
				{
					if(s[k] == s[j])
					{
						if (j - i >= max)
						{
							max = j - i;
						}
						j = length + 1;
						break;

					}
					
				}
				if(j != length + 1)
					if (j - i + 1 >= max)
						max = j - i + 1;
			}
		}
		return max;
	}
};

int main()
{
	Solution s;

	string str = "abba";

	int r = s.lengthOfLongestSubstring(str);
}