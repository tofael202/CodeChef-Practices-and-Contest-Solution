//https://www.codechef.com/JAN221C/problems/KEPLERSLAW

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int numOfInput,i,t1,t2,r1,r2;
	float firstResult,secondResult;
	cin>>numOfInput;
	for( i=0;i<numOfInput;i++){
	    cin>>t1>>t2>>r1>>r2;
	    //cout<<r2<<" r2 "<<endl;
	    firstResult=pow(t1,2)/pow(r1,3);
	    secondResult=pow(t2,2)/pow(r2,3);
	    //cout<<firstResult<<" second "<<secondResult<<endl;
	    if(firstResult==secondResult){
	        cout<<"Yes"<<endl;
	        
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}

