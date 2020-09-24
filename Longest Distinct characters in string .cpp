
#include <bits/stdc++.h> 
using namespace std; 

#define NO_OF_CHARS 256 

int longestUniqueSubsttr(string str) 
{ 
	int n = str.size(); 

	int res = 0; // result 

	vector<int> lastIndex(NO_OF_CHARS, -1); 

	int i = 0; 

	for (int j = 0; j < n; j++) { 
 
		i = max(i, lastIndex[str[j]] + 1); 

		// Update result if we get a larger window 
		res = max(res, j - i + 1); 

		// Update last index of j. 
		lastIndex[str[j]] = j; 
	} 
	return res; 
} 

// Driver code 
int main() 
{   int T;
cin >> T;
while(T--){
	string s;
	cin >> s;
	int len = longestUniqueSubsttr(s); 
	cout << len << endl; 
}
	return 0; 
} 
