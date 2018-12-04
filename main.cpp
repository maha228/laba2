#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int main(){
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string input;//слово
	stringstream ss;	//строковый поток
	while(getline(in, input)){//считываем по предложению
		 string temp = ss.str();
		 ss.str(string());
		 ss << input << '\n' << temp; //заносим в строковый поток

	}
	while(getline(ss, input)){
		cout << input << '\n';// выводим предложения
	}
	in.close();//закрываем файл										   
	system("pause>>void");
}