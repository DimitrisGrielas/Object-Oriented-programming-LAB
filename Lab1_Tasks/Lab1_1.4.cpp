#include <iostream>

using namespace std;

int primeORnot(int num)
{
	//cout<<"2\n";

	/*int check = (num%1 == 0) && (num%num == 0);
	if(check)
		return 0;
	else
		return 1;*/

	int i;
	int count = 0;
	//int check = (num%i==0);

	//cout<<"3\n";

	for(i = 1; i <= num; i++)
	{
		//if(check)
		if(num%i==0)
		{
			count++;
		}
	}

	//cout<<"4\n";

	if(count > 2)
		return 1;
	else
		return 0;
}

int main()
{
	int num;
	cout<<"Enter a number: \n";
	cin>>num;

	//cout<<"1\n";

	cout<<primeORnot(num)<<"\n";
	return 0;
}
