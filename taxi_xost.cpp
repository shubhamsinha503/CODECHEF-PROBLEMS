#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,x;
	    cin>>n>>x;
	    vector<int> days;
	    long long int cost=0;
	   for(int i=0;i<n;i++){
	       cin>>days[i];
	   }
	   for(int j=0;j<n;j++){
	       if(days[j]==1 || (days[j-1]==1 && j!=0)){
	           cost=cost+x;
	       }
	}
	 cout<<cost <<endl;
	
	}
	return 0;
}