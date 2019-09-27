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
void Insertion(int arr[], int n)  {
	int i, k, j;  
	for (i=1;i<n;i++) {  
		k=arr[i];  
		j=i-1; 
		while(j>=0&&arr[j]>k){  
			arr[j+1]=arr[j];  
			j=j-1;  
		}  
		arr[j+1]=k;  
	}  
} 
int particion (int arr[], int low, int high)  
{  
	int pivote=arr[high]; 
	int i=(low-1);
	for (int j=low;j<=high-1;j++){
		if (arr[j] < pivote){  
			i++;
			Swap(arr[i],arr[j]);  
		}  
	}  
	Swap(arr[i + 1],arr[high]);  
	return (i + 1);  
} 
void Quick(int arr[], int low, int high){  
	if (low < high){
		int pivote = particion(arr, low, high);  
		Quick(arr, low, pivote - 1);  
		Quick(arr, pivote + 1, high);  
	} 
	else 
		return;
}
int main(int argc, char *argv[]) {
	int x[5]={3,5,1,2,4};
	//Burbuja(x,5);
	//Insertion(x,5);
	Quick(x,0,4);
	cout<<"{";
	for(int i=0;i<5;i++){
		cout<<x[i]<<",";
	}
	cout<<"}";
	return 0;
}

