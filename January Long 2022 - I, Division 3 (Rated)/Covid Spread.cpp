// https://www.codechef.com/JAN221C/problems/COVSPRD

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numOfInput;
	int i, total=0,day,people,totalInf=0;
	cin>>numOfInput;
	for(i=0;i<numOfInput;i++){
	    cin>>people>>day;
	    totalInf=0;
	    
	    for(int j=0;j<=day;j++){
	        //cout<<"Total "<<totalInf<<endl;
	        
	        if(j==0){
	            totalInf=1;
	        }
	        else if(j<=10){
	            totalInf=2*totalInf;
	        }
	        else if(j>10){
	            totalInf=3*totalInf;
	        }
	        if(totalInf>=people){
	            totalInf=people;
	            break;
	            
	        }
	        
	    }
	    cout<<totalInf<<endl;
	}
	return 0;
}

