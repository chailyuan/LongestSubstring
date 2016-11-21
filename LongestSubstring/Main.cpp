#include <string>
#include <math.h>
#include <hash_map>
#include <map>

using namespace std;
/*
the basic idea is, keep a hashmap which stores the characters in string as keys and their positions as values, and keep two pointers which define the max substring. move the right pointer to scan through the string , and meanwhile update the hashmap. If the character is already in the hashmap, then move the left pointer to the right of the same character last found. Note that the two pointers can only move forward.
public int lengthOfLongestSubstring(String s) {
if (s.length()==0) return 0;
HashMap<Character, Integer> map = new HashMap<Character, Integer>();
int max=0;
for (int i=0, j=0; i<s.length(); ++i){
if (map.containsKey(s.charAt(i))){
j = Math.max(j,map.get(s.charAt(i))+1);
}
map.put(s.charAt(i),i);
max = Math.max(max,i-j+1);
}
return max;
}
*/

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		
		map<char,int> myMap;
		int length=0;
		int i=0,j=0;

		for (;i<s.length();i++)
		{
			if (myMap.find(s[i])!=myMap.end())
			{

			}
		}

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