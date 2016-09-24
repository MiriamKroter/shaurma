#include <iostream>
using namespace std;
int f(int a)
{
	if(a==1 || a==0)
		return 1;
	else 
		return f(a-1)+f(a-2);
}
void main()
{
	int c=f(8);
	cout << c << endl;
	system("pause");
}