#include<iostream>
using namespace std;

int main(){
	int a,b,i=1;
	cin>>a>>b;
	while(i<=100){
		i=i+1;
		if(i%a==0||i%b==0)
		{
			cout <<i<<endl;
		}
			
	}

} 
