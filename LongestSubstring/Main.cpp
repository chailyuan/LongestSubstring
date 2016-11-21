#include <string>
#include <math.h>
#include <hash_map>
#include <map>

using namespace std;


class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		
		int ref[256];
		fill_n(ref, 256, -1);
		int left = 0;
		int length = 0;
		for (int i = 0; i<s.length(); i++) {
			if (ref[(int)s[i]]+1>left) 
				left = ref[(int)s[i]] + 1;
			else if ((i - left)>length - 1) 
				length = (i - left + 1);
			ref[(int)s[i]] = i;
		}
		return length;

	}
};

int main()
{
	Solution s;

	string str = "abcd";

	int j=0;
	if (j++==0)
	{
		j=0;
	}

	int r = s.lengthOfLongestSubstring(str);
}