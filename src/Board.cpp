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
	cout << "안녕하세요. " << U.getID() << "님 건의사항 게시판 입니다." << endl;
	cout << "하고 싶은 말을 적어주세요: ";
	cin.ignore();
	getline(cin, cpps);
	
	boardFile << U.getID() << "님의 건의사항" << endl;
	boardFile << cpps << endl;
	boardFile << endl;
	boardFile.close();
	cout << U.getID() << "님의 건의사항이 작성되었습니다!" << endl;
	cout << "board.txt에서 확인 가능합니다!" << endl;
	cout << endl;
}