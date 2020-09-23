// { Driver Code Starts
 #include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}// } Driver Code Ends

bool isNumericChar(char x) 
{ 
    return (x >= '0' && x <= '9') 
               ? true
               : false; 
} 
  
/*You are required to complete this method */
int atoi(string str)
{
        if (str == "\0") 
        return 0; 
  
    // Initialize result 
    int res = 0; 
  
    // Initialize sign as positive 
    int sign = 1; 
  
    // Initialize index of first digit 
    int i = 0; 
  
    // If number is negative, 
    // then update sign 
    if (str[0] == '-') { 
        sign = -1; 
  
        // Also update index of first digit 
        i++; 
    } 
  
    // Iterate through all digits of 
    // input string and update result 
    for (; str[i] != '\0'; ++i) { 
  
        // You may add some lines 
        // to write error message 
        if (isNumericChar(str[i]) == false) 
            return -1; 
  
        // to error stream 
        res = res * 10 + str[i] - '0'; 
    } 
  
    // Return result with sign 
    return sign * res; 
}
