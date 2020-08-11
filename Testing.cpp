#include <iostream>
using namespace std;
bool checkprime(int n)
{
	bool flag=true;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i == 0)
		{
			flag=false;
			break;
		}
	}
	return flag;
}
int main()
{
	int n;
	cout<<"Enter a composite number: ";
	cin>>n;
	bool flag = false;
	for(int i=2;i<=n/2;i++)
	{
		if(checkprime(i))
		{
			if(checkprime(n-i))
			{
				cout<<n<<" = "<<i<<" + "<<n-i<<endl;
				flag=true;
			}
		}
	}
	if(!flag)
		cout<<n<<" can't be expressed as sum of two primenumbers"<<endl;
		return 0;
}

