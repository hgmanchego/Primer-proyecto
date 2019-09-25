#include <iostream>
using namespace std;
int IteSuma(int arr[],int tam){
	int x=0;
	for(int i=0;i<tam;i++){
		x+=arr[i];
	}
	return x;
}
int main(int argc, char *argv[]) {
	int x[5]={1,2,3,4,5};
	cout<<IteSuma(x,5);
	return 0;
}

