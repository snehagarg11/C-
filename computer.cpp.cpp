#include<iostream>
using namespace std;

int main(){
	int i=0,sum=0,x;
	while(i<5){
		cin>>x;
		if(x%2==0){
//				sum = sum + x;
			sum += x;
		}
	
		i = i+1;	
	}
	cout<<"sum="<<sum;
}
