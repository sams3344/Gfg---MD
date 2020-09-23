#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(string arr[],int n){
        sort(arr,arr+n);
        
        /*ex 
        
        geeksforgeeks geeks geek geezer   sorted as   x=geek  x=geeks  x=geeksforgeeks  x=geezer
        apple ape april                   sorted as               x=ape  x=apple  x=april  
        flower flow flight                sorted as   x=flight  x=flow  x=flower  
        
        */
        
        /*for(int i=0; i<n; i++){
            cout <<  "x=" << arr[i] << "  ";
        }
        cout << endl;*/
	    
	    int minLenString = min(arr[0].size(),arr[n-1].size());       //minlen = 6
	    //cout << "minlen=" << minLenString <<endl;
	    
	    string ans;         //flight, flow, flower
	    char current;            
	    
	    for(int i=0;i<minLenString; i++){
	        current = arr[0][i];     //c=flight[0]=f
	        
	        for(int j=1;j<n; j++){
	            //as long all arr elts ahev c, loop doesnt break
	            if(arr[j][i]!=current){
	                return ans;                 //f, l, it breaks for flight[i]   
	                                        //coz i inst there in flower or flow
	            }
	        }
	        
	        ans.push_back(current);
	    }
	    
	    return ans;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    string arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    string res=longestCommonPrefix(arr,n);
	    if(res.length()){
	        cout<<res<<"\n";
	    }
	    else{
	        cout<<"-1"<<"\n";
	    }
	    
	}
	return 0;
}
