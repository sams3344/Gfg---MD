// CPP program to check for balanced parenthesis. 
#include <bits/stdc++.h> 
using namespace std; 

bool areParanthesisBalanced(string expr) 
{ 
	stack<char> s; 
	char x; 

	// Traversing the Expression 
	for (int i = 0; i < expr.length(); i++) { 
		if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') { 
			// Push the element in the stack 
			s.push(expr[i]); 
			continue; 
		} 

		if (s.empty()) 
			return false; 

		switch (expr[i]) { 
		case ')': 
			x = s.top(); 
			s.pop(); 
			if (x == '{' || x == '[') 
				return false; 
			break; 

		case '}': 
			x = s.top(); 
			s.pop(); 
			if (x == '(' || x == '[') 
				return false; 
			break; 

		case ']':
			x = s.top(); 
			s.pop(); 
			
			if (x == '(' || x == '{') 
				return false; 
			break; 
		} 
	} 

	// Check Empty Stack 
	if (s.empty())        //what if all closing are balanced but some opening one is left
	    return true;
	else
	    return false;
} 

// Driver program to test above function 
int main() 
{ 
    int T;
    cin >> T;
    while(T--){
	string expr ;
	
	cin >> expr;

	if (areParanthesisBalanced(expr) == true) 
		cout << "balanced" << endl; 
	else
		cout << "not balanced" << endl; 
    }
	return 0; 
} 
