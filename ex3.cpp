#include<iostream>
using namespace std;

int main()
{
	char fullname;
	int age;
	
	cout<<" Enter your full name: ";
	cin>>fullname;
	cout<<" Enter your age: ";
	cin>>age;
	
	if (age<18){
		cout<<" You can't participate in election.";
	}
	else if (age> 18){
		if (age>21){
			cout<<" You are allowed both to elect and to be elected.";
			}else{
				cout<<" You can elect but you can't be elected.";
			}
}
	return 0;
}
