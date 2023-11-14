#include<iostream>
#include<math.h>
#include<cmath>
#include<vector>
using namespace std;

long long int power_mod_10(long long int base, long long int exp) {
    long long int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % 10;
        }
        base = (base * base) % 10;
        exp /= 2;
    }
    return result;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	     int x,m;
	    cin>>x>>m;
	     int temp,i=0,temp2;
        vector<int> digits;
	    while(x!=0){
	        temp=x%10;
	        temp2 = power_mod_10(temp,m);
            digits.push_back(temp2);
	        x=x/10;
            i++;
	    }
        
        int s=digits.size();
        long long int k=0;
        for(int i=0;i<s;i++){
            cout<<digits[i];
        }
        for(int i=0;i<digits.size();i++){
           k=(k*10 )+ digits[i];
        }
        if(k%7==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
	    
	}
	return 0;
}