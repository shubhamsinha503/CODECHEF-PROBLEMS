#include <iostream>
using namespace std;


int monster(int h, int x,int y ){
    int hits_req=0;

    while(h>0){
        h=h-x;
        if(h<=0){
            return 0;
        }
        h=h+y;
        hits_req++;

        if(hits_req>1000){
            return 1;
        }

        if(h>0){
            return 1;
        }
        
    }

}

int main() {

   int n;
   cin>>n;
   int h,x,y;
   for(int i=0;i<n;i++){
    cin>>h>>x>>y;
   }

int result=monster(h,x,y);
cout<<result<<endl;

	
}