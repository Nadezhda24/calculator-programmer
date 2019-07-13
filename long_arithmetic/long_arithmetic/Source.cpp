#include <iostream>
#include <string>
#include "arithmetic.h"
#include "muParser.h"
using namespace std;


int main() {

	ar str_a(1000), str_b(1000);
	/*string st_a, st_b;
	cin >> st_a >> st_b;
	str_a.StrToVector(st_a);
	str_b.StrToVector(st_b);
	 str_a= str_a + str_b;
	cout << "a+b=" ;
	str_a.Output();
	cout << endl;

	str_a.StrToVector(st_a);
	str_b.StrToVector(st_b);
	str_a = str_a - str_b;
	cout << "a-b=";
	str_a.Output();
	cout << endl;
	str_a.StrToVector(st_a);
	str_b.StrToVector(st_b);
	if (str_a == str_b) { cout << "true\n"; }
	else { cout << "false\n"; }

	str_a.StrToVector(st_a);
	str_b.StrToVector(st_b);
	if (str_a > str_b) { cout << "true\n"; }
	else { cout << "false\n"; }

	str_a.StrToVector(st_a);
	str_b.StrToVector(st_b);
	str_a = str_a * str_b;
	cout << "a*b=";
	str_a.Output();
	cout << endl;

	/*str_a.StrToVector(st_a);
	str_b.StrToVector(st_b);
	str_a = str_a / str_b;
	cout << "a/b=";
	str_a.Output();
	cout << endl;
	
	str_a.StrToVector(st_a);
	//str_b.StrToVector(st_b);
	int x;
	cout << "¬ведите х\n";
	cin >> x;
	str_a = str_a / x;
	cout << "a/b=";
	str_a.Output();
	cout << endl;
	
	string st_a;
	cin >> st_a;
	str_a.StrToVector(st_a);
	int x;
	cin >>  x;
	str_a = str_a % x;
	cout << "a%b=";
	str_a.OutputA();
	cout << endl;
	
	*/
	string st_a;
	cin >> st_a;
	str_a.StrToVector(st_a);
	int in, of;
//	cin >> in >> of;
	ar d = str_a.translation( 16, 10, "a");
	cout << "+++++++++++++++++++" << endl;
	cout << "int = ";
	d.OutputA();
	cout << endl;
	cout << "char  =  ";
	d.OutputTo_16();
	cout << endl;

	system("pause");
	return 0;
}