//Nice one, soln for 2 arrays in main page, do for 2 
//Watch gfg video if needed

vector<int> common_element(vector<int>ar1, vector<int>ar2)
{
    // Your code here
    // Initialize starting indexes for ar1[], ar2[] and ar3[] 
    int i = 0, j = 0;
    int n1 = ar1.size(), n2 = ar2.size();
    sort(ar1.begin(), ar1.end());
    sort(ar2.begin(), ar2.end());
    
    
  
    // Iterate through three arrays while all arrays have elements 
    while (i < n1 && j < n2 ) 
    { 
         // If x = y and y = z, print any of them and move ahead  
         // in all arrays 
         if (ar1[i] == ar2[j]) 
         {   cout << ar1[i] << " ";   i++; j++; } 
  
         // x < y 
         else if (ar1[i] < ar2[j]) 
             i++; 
  
         // y < z 
        // else if (ar2[j] < ar3[k]) 
             //j++; 
  
         // We reach here when x > y and z < y, i.e., z is smallest 
         else
             j++; 
    } 
}
