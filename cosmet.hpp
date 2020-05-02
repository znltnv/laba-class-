#ifndef COSMET_HPP
#define COSMET_HPP
#include<iostream>
#include<string>

using namespace std;

class Cosmetik {
	public://Поля
		string type;
		string name;
		int price;
		int count;
	friend istream & operator >> (istream & in, Cosmetik &cos);
	friend ostream & operator << (ostream & out,const Cosmetik &cos);
	
};
	void chten(char namefile[30]);
	void change(char namefile[30]);
	void deletes(char namefile[30]);
	void poisk(char namefile[30]);
#endif
