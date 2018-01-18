//Name:Dayang Nur Atiqah bt. Ag Zulkarenain
//Matric no.:A17DW1171

#include<iostream>
#include<cctype>
using namespace std;

int main() {
	
	int i=1,u=1,sum=0;
	cout<<"The perfect numbers between 1 to 500 are: "<<endl;
	
	while(i<500)
	{
		while(u<500)
		{
			if(u<i)
			{
				if(i%u==0)
				{
					sum=sum+u;
					u++;
				}
			}
		}
	}
	
	if(sum==i)
		{
			cout<<i<<"is a perfect number."<<endl;
			i++;
			u=1;
			sum=0;
		}
		
	return 0;
}
