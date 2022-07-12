#include <iostream>
using namespace std;
main (void)
{
	int n,a,S=0;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
	a=i*i;
	S=S+a;
	}
	cout << "S = " << S;
}

