#include <bits/stdc++.h>
using namespace std;

void permute(string a, int l, int r, vector<string> &v) 
{ 
    // Base case 
    if (l == r) 
        v.push_back(a);
        
    else
    { 
        // Permutations made 
        for (int i = l; i <= r; i++) 
        { 
 
            // Swapping done 
            swap(a[l], a[i]); 
 
            // Recursion called 
            permute(a, l+1, r, v); 
 
            //backtrack 
            swap(a[l], a[i]); 
        } 
    } 
} 

int main() {
    int T;
    cin >> T;
    while(T--){
        
    vector<string> v;
	string str; 
	cin >> str;
    int n = str.size(); 
    permute(str, 0, n-1, v); 
    sort(v.begin(), v.end());
    for(auto x: v)
        cout << x << " ";
    cout << endl;
    }
    
	return 0;
}
