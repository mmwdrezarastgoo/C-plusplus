//t1
//Fasl1= type , operation (cin , cout)
#include <iostream>
#include <conio.h>
using namespace std;
 main()
{
	cout<<"Hello"<<"ali"<<endl;
	
	cout<<"Hello"<<'\t'<<"ali"<<endl<<endl; //spacing 4 charactor
	
	cout<<"Hello"<<'\n'<<"ali"<<endl;
	cout<<"Hello"<<endl<<"ali"<<endl<<endl;
	
	cout<<"Hello"<<'\b'<<"ali"<<endl;
	cout<<"Hello"<<'\b'; //backward cursor
	
	
	cout<<'\a';    //alarm sound
	getch(); //header file of getch() is coni.h , it causes no extra text after run
}