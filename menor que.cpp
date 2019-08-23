#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c;
	cout<<"Ingrese numero a: ";cin>>a;
	cout<<"Ingrese numero b: ";cin>>b;
	cout<<"Ingrese numero c: ";cin>>c;
	
	if(a<b){
		cout<<a;
	}
	if(b<c){
		cout<<b;
	}
	else
	   cout<<c;
	return 0;
}

