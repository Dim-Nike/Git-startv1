#include <iostream>
#include <string>
using namespace std;


string foo(string name)
{
return "Hello, "+name;
}
int main()
{
string x;
cin>>x;
cout<<foo(x)<<endl;
return 0;
}

