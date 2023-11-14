#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int H,W,X,Y,K;
        cin>>H>>W>>X>>Y>>K;
        long long int P;
        P= pow(((pow((H-Y),2))+(pow((W+X),2))),0.5);
        cout<<P<<endl;
        cout<<K<<endl;
        if(P<K){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}