//Name:Dayang Nur Atiqah bt. Ag Zulkarenain
//Matric no.:A17DW1171

#include<iostream>
using namespace std;

int main() {
	
	int t,r,sum,num;
	
	cout<<"Enter an integer: "<<endl;
	cin>>t;
	
	for(t=num;num!=0;num=num/10)
	{
		r=num%10;
		sum=sum*10+r;
	}
	
	cout<<"Reversed number: "<<sum;
	
	return 0;
}
