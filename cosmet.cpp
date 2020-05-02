#include <iostream>
#include<fstream>
#include <string>
#include "cosmet.hpp"

using namespace std;


istream & operator >>(istream & in, Cosmetik &cos) {
    		in >> cos.type; 
    		in >> cos.name;
		in >> cos.price;
		in >> cos.count;
    	return in;
	}
ostream & operator << (ostream & out,const Cosmetik &cos){
		out << cos.type << " " << cos.name << " " << cos.price << " "<< cos.count << endl;
	return out;
	}
void chten(char namefile[30]){	
	int d=0;
	ifstream fin;
	fin.open(namefile);
	if (!(fin.is_open()))
	{
		cout << "Error file not open!!"<< endl;
	}
	
		fin >> d;


	Cosmetik *cos = new Cosmetik[d];
	for (int i = 0; i < (d); i++) {
		fin >> cos[i];
        	cout << cos[i];
    	}
	fin.close();
	delete [] cos;
}
void change(char namefile[30]){
	int d=0,c=0;
	ifstream fin;
	fin.open(namefile);
	if (!(fin.is_open()))
	{
		cout << "Error file not open!!"<< endl;
	}
	
		fin >> d;

	Cosmetik *cos = new Cosmetik[d];
	Cosmetik cos2;
	for (int i = 0; i < (d); i++) {
        	fin >> cos[i];
    	}
	fin.close();
	ofstream fout(namefile,ios_base::trunc);
	cout << "Добавьте элемент(тип,название,цена,кол-во)"<< endl;
	cin >> cos2;
	c = d+1;
	fout << c << endl ;
	for (int i = 0; i < d; i++) {
		
        	fout << cos[i];
    	}
	fout << cos2;
    	
	fout.close();
	delete [] cos;	
}
void deletes(char namefile[30])
{
	int d=0,c=0;
	ifstream fin;
	fin.open(namefile);
	if (!(fin.is_open()))
	{
		cout << "Error file not open!!"<< endl;
	}
	
		fin >> d;
	Cosmetik *cos = new Cosmetik[d];
	Cosmetik cos2;
	Cosmetik cos3;
	cout << "Введите название продукта который хотите удалить :"<< endl;
	cin >> cos2.name;
	int j=0;
	for (int i = 0; i < (d); i++) {
		fin >> cos3;
			if (!(cos3.name == cos2.name)){	
				cos[j] = cos3;
				j++;
			}	
			
    	}
	fin.close();
	ofstream fout(namefile,ios_base::trunc);
	c = d-1;
	fout << c << endl ;
	for (int i = 0; i < c ; i++) {
		
        	fout << cos[i];
    	}
	fout.close();
	delete [] cos;	
}
void poisk(char namefile[30]){
	int d=0,c=0;
	ifstream fin;
	fin.open(namefile);
	if (!(fin.is_open()))
	{
		cout << "Error file not open!!"<< endl;
	}
	
		fin >> d;
	Cosmetik *cos = new Cosmetik[d];
	Cosmetik cos2;
	Cosmetik cos3;
	cout << "Введите название продукта который хотите найти "<< endl;
	cin >> cos2.name;
	int j=0;
	for (int i = 0; i < (d) ; i++) {
		fin >> cos3;
			if ((cos3.name == cos2.name)){
				cout << "Ваш продукт найден )) :" << endl;	
				cout << cos3;
			}	
			
    	}
	fin.close();
	delete [] cos;	
}

