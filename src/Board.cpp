#include "Board.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Board::suggestionBoard(User &U) {
	ofstream boardFile;
	boardFile.open("board.txt");
	string cpps;
	
	cout << "USER ID: " << U.getID() << endl;
	cout << "�ȳ��ϼ���. " << U.getID() << "�� ���ǻ��� �Խ��� �Դϴ�." << endl;
	cout << "�ϰ� ���� ���� �����ּ���: ";
	cin.ignore();
	getline(cin, cpps);
	
	boardFile << U.getID() << "���� ���ǻ���" << endl;
	boardFile << cpps << endl;
	boardFile << endl;
	boardFile.close();
	cout << U.getID() << "���� ���ǻ����� �ۼ��Ǿ����ϴ�!" << endl;
	cout << "board.txt���� Ȯ�� �����մϴ�!" << endl;
	cout << endl;
}