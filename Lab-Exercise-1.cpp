//Name:Dayang Nur Atiqah bt. Ag Zulkarenain
//Matric no.:A17DW1171

#include<iostream>
using namespace std;

int main() {
	
	int no1,no2,x,sum;
	
	cout<<"Find the sum of a given number"<<endl;
	cout<<".............................."<<endl;
	
	cout<<"Input number: "<<endl;
	cin>>no1>>no2;
	
	while(no2>0) {
		
		x=no1%10;
		no1=no1/10;
		sum=sum+x;
	}
	
	cout<<"The sum is "<<sum<<endl;
	
	return 0;
}
