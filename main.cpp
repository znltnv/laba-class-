#include<iostream>
#include<fstream>
#include "cosmet.hpp"

using namespace std;

int main(int argc,char*argv[]){
	
		char*namefile;
		if(argc > 1) 
			namefile = argv[1];
		else{
			cout << "Не задано имя файла" << endl;
			return 1;
		}
	for(;;){
	int b;
	//Cosmetik cos0;
		system("clear");
		cout << "Здравствуй пользователь!\n Выбери действие:" <<endl;
		cout << "1 - Посмотреть товары на полке" << endl;
		cout << "2 - Добавить товар на полку" << endl;
		cout << "3 - Удалить товар с полки"<< endl;
		cout << "4 - Найти продукт на полке(по названию)"<< endl;
		cout << "5 - Выход"<< endl;
		cin >> b;
			if(b<1 || b>6)
				cout << "NO! Select an item from the menu!" << endl;
		while(b==1){
			
			system("clear");
			chten(namefile);
			cout << "0-Return to the menu"<<endl;
			cin >>b ;
				if(b<0 || b>0)
					cout << "NO! Select an item from the menu!" << endl;
		}
		while(b==2){
			system("clear");
			change(namefile);
			chten(namefile);
			cout << "\n0-Return to the menu"<<endl;
			cin >>b ;
				if(b<0 || b>0)
					cout << "NO! Select an item from the menu!" << endl;
		}
		while(b==3){
			system("clear");
			deletes(namefile);
			chten(namefile);
			cout << "0-Return to the menu"<<endl;
			cin >>b ;
				if(b<0 || b>0)
					cout << "NO! Select an item from the menu!" << endl;
		}
		while(b==4){
			system("clear");
			poisk(namefile);
			cout << "0-Return to the menu"<<endl;
			cin >> b ;
				if(b<0 || b>0)
					cout << "NO! Select an item from the menu!" << endl;
		}
		
		while(b==5){
			return 0;
		}
	
	}
}
