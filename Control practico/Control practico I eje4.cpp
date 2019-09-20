#include <iostream>
using namespace std;
int ReFi(int x){
	if(x<2)
		return x;
	else
		return ReFi(x-1)+ReFi(x-2);
}
int ItFi(int x){
	int a=0,b=1,c;
	for(int i=1;i<x;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
int main(int argc, char *argv[]) {
	int x;
	cout<<"Ingrese numero: ";cin>>x;
	cout<<ReFi(x)<<endl<<ItFi(x);
	return 0;
}

