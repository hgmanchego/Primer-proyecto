#include <iostream>
using namespace std;
void Swap(int &a,int &b){
	int x;
	x=a;
	a=b;
	b=x;
}
void RecInvertir(int arr[],int i,int tam){
	if(i==tam)
		return;
	else{
		Swap(arr[i],arr[tam-1]);
		return RecInvertir(arr,i+1,tam-1);
	}
}
int main(int argc, char *argv[]) {
	int x[6]={1,2,3,7,8,9};
	RecInvertir(x,0,6);
	cout<<"{";
	for(int i=0;i<6;i++){
		cout<<x[i]<<",";
	}
	cout<<"}";
	return 0;
}

