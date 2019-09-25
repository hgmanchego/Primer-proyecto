#include <iostream>
using namespace std;
int RecSuma(int arr[],int tam){
	if(tam==1)
		return arr[0];
	else
		return arr[tam-1]+RecSuma(arr,tam-1);
}
int main(int argc, char *argv[]) {
	int x[5]={1,2,3,4,5};
	cout<<RecSuma(x,5);
	return 0;
}

