#include <iostream>
using namespace std;
int len(int a){
	int b=0;
	while(a!=0){
		a/=2;
		b++;
	}
	return b;
}
int power(int x,int y){
	if(y==0)
		return 1;
	else
		return x*power(x,y-1);
}    
int main(int argc, char *argv[]) {
	int x,a,b=0,size,size2;
	cout<<"Ingrese numero: ";cin>>x;
	size=len(x);
	size2=size;
	for(int i=0;i<size2;i++){
		a=x%2;
		b=b+a*power(10,i);
		x/=2;
	}
	cout<<b;
	return 0;
}

