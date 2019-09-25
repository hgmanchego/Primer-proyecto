#include <iostream>
using namespace std;
void Swap(int &a,int &b){
	int x;
	x=a;
	a=b;
	b=x;
}
void Burbuja(int arr[],int tam){
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam-1;j++){
			if(arr[j]>arr[j+1])
				Swap(arr[j],arr[j+1]);
		}
	}
}
void Insertion(int arr[],int tam){
	for(int i=1;i<tam;i++){
		int temp=arr[i];
		for(int j=i;j>0&&arr[j-1]>temp;j--){
		arr[j]=arr[j-1];
		arr[j]=temp;
		}
	}
}
int main(int argc, char *argv[]) {
	int x[5]={3,5,1,2,4};
	Insertion(x,5);
	cout<<"{";
	for(int i=0;i<5;i++){
		cout<<x[i]<<",";
	}
	cout<<"}";
	return 0;
}

