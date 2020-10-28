#include <iostream>
#include <string>
using namespace std;

class coor
{
	private:
	int x;
	int y;

	public:
	coor(int x, int y)
	{
		this->x=x;
		this->y=y;
	{
	
	string print()
	{
		return "X = " + x + " Y = "+y;
	}

};

class Print :public coor
{
	public:
	void display()
	{
	cout<<print()<<endl;
	}
};


string foo(string name)
{
return "Hello, "+name;
}
int main()
{
cout<<"How are you?"<<endl;
string x;
cin>>x;
cout<<foo(x)<<endl;
cout<<"Enter two numbers"<<endl;
int x1,y1;
cin>>x1>>y1;
coor v1(x1,y1);
Print m1;
m1.display();

return 0;
}

