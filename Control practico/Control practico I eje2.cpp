#include <iostream>
using namespace std;
int tam(int x){
	int y=-1;
	while(x!=0){
		x=x/10;
		y++;
	}
	return y;
}
int power(int x,int y){
	if(y==0)
		return 1;
	else
		return x*power(x,y-1);
}                   
int main(int argc, char *argv[]) {
	int x,y,z,size,size2,w=0;
	cout<<"Ingrese numero: ";cin>>x;
	size=tam(x);
	size2=tam(x);
	for(int i=0;i<=size2;i++){
		y=x%10;
		z=y*power(10,size);
		w=w+z;
		size--;
		x=x/10;
	}
	cout<<w;
	return 0;
}

