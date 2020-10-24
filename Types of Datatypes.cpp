/*This program deals with Datatypes in C/C++ Language.
$$) Data types : Data types are nothing but are like containers, that are used to keep things, just as our mothers keep different types of Masalas in Kitchen, and small stuffs

$$) There are generally three types of Datatypes : 

1) Primitive Datatypes
2) Derived Data types and 
3) User defined Data types.

Let's Talk on them....!!!!

1)Primitive Data Type: The primitive Data type is a type of Data type which are used from primitive time. (Bogus Line, i know).
  These Data types are used from older times, the origination time of C and C++, and will always be used whnever the programming in C and C++ is to be done.
  
  These includes : int(), char(), float(), bool()
  
  The given program deals with Primitive Data types and finding length of each Data types.*/ 
  
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a; //variable declaration
	a=12; //variable initiliasation
	
	cout<<"size of int : "<<sizeof(a)<<endl;
	
	char b;
	cout<< "Size of char :"<<sizeof(b)<<endl;
	
	float c;
	cout <<"Size of float :"<<sizeof(c)<<endl;
	
	bool d;
	cout<<"size of bool :"<<sizeof(d)<<endl;
}
/*This program can also be used to know the length of character of other data types too. Try it yourself to, do some poking stuff in it.
  In the very next program, you will get to know about Derived and User defined Data types. Stay tuned*/ 

