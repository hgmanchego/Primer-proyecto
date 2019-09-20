#include <iostream>
using namespace std;
int len(int x){
	int y=0;
	while(x!=0){
		x/=10;
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
int main(int argc, char *argv[]){
	int x,y,z=0,size,sum=0;
	cout<<"Ingrese numero binario: ";cin>>x;
	size=len(x);
	for(int i=0;i<size;i++){
		y=x%10;
		sum=sum+(y*power(2,z));
		x/=10;
		z++;
	}
	cout<<"En decimal seria: "<<sum;
	return 0;
}

