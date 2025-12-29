#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
int a , b;
cout << "Insert two numbers: \n";
cin >> a >> b;

cout << "\n===Table===" << endl;

int total = 0;
for( int i = 0; i < b; i++)
{
    cout << a << " * " << i << " = "<< a*i << endl;
    total+=a*i;
}

cout << "\n\n Score total points:" << total;

system("pause<0");
return 0;

}