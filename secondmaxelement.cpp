#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number of elements in an array:";
	cin>>n;
	int a[n];
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
	int maxelement= a[0];
	int smx= a[0];
	for(int i=0;i<=n-1;i++){
		if(a[i]>=maxelement){
			maxelement=a[i];
		}
	}
	for(int i=0;i<=n-1;i++){
		if(smx<a[i] && a[i]!=maxelement){
			smx =a[i];
		}
	}
	cout<< smx <<  "  is the  Second Max Element";
	
}
