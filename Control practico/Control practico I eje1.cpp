#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int  x=1000000,y=0;
	for(long long i=1;i<x;i++){
		if((i%3==0)||(i%5==0))
			y=y+i;
	}
	cout<<y;
	return 0;
}

