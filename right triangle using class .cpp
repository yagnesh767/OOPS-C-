#include<iostream>
using namespace std;
class TRI
{
	public:
	string p;
	int n,i,j;
	void rt(string p){
		n = p.length();
		for(i=0;i<=n;i++)
		{
			for(j=2*(n-i);j>=0;j--)
			{
				cout<<" ";
			}
			for(j=0;j<=i;j++)
			{
				cout<<p[i]<<" ";
			}
			cout<<endl;
		}
	}
};
int main()
{
	string m;
	cout<<"strig = ";
	cin>>m;
	TRI O;
	O.rt(m);
}