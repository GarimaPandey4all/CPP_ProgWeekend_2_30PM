#include<iostream.h>  //preprocessor directives
#include<conio.h>

class Hello
{
	public:
	void Showdata() //function()
	{
	 cout<<"Hello World";

	}
};


void main()
{
     clrscr();   //clear screen
     Hello h1;
     h1.Showdata();
     getch(); //get character
}



