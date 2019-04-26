//fourier series
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

class fourier{
	int n;
	float result,a,pi,sum;

	void getdata(){
	cout<<"Enter the values of n and a"<<endl;
	cin>>n>>a;
	}

	void calculations(){
		ofstream of;
		of.open("output",ios::out);
		sum = 0.0
		pi = 3.14;
		float x,y;
		for(int i=1;i<=20000;i++){
			x=i*pi*0.001;
			for(int j=1;j<n;j+=2){
				y = (sin(j*x))/j;
				sum = sum + y;
				result = ((4*a)/pi)*sum;
			}
			of<<x<<" "<<result<<endl;
		}
	}


};

int main(){
	fourier x1;
	x1.getdata();
	x1.calculations;
	return 0;
}



