#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int main(){
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string input;//�����
	stringstream ss;	//��������� �����
	while(getline(in, input)){//��������� �� �����������
		 string temp = ss.str();
		 ss.str(string());
		 ss << input << '\n' << temp; //������� � ��������� �����

	}
	while(getline(ss, input)){
		cout << input << '\n';// ������� �����������
	}
	in.close();//��������� ����										   
	system("pause>>void");
}