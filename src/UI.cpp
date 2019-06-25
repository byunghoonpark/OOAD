#include "UI.h"
#include <iostream>

using namespace std;

INIT_UI::INIT_UI() {}
INIT_UI::~INIT_UI() {}
void INIT_UI::displayUI() {
		cout << "-------------------------------------------" << endl;
		cout << "                                           " << endl;
		cout << "        OOAD PC방에 오신걸 환영합니다.          " << endl;
		cout << "                                           " << endl;
		cout << "                          관리인 : 박병훈     " << endl;
		cout << "                                           " << endl;
		cout << "                                           " << endl;
		cout << "              1. 로그인                      " << endl;
		cout << "              2. 회원가입                    " << endl;
		cout << "              3. PC종료                     " << endl;
		cout << "                                           " << endl;
		cout << "         원하는 항목의 숫자를 입력하세요.         " << endl;
		cout << "-------------------------------------------" << endl;
		cout << endl;
}


Function_UI::Function_UI() {}
Function_UI::~Function_UI() {}
void Function_UI::displayUI() {
		cout << "-------------------------------------------" << endl;
		cout << "                                           " << endl;
		cout << "       <<  OOAD PC방의 기능 제공  >>          " << endl;
		cout << "                                           " << endl;
		cout << "           1. 건의사항 작성                   " << endl;
		cout << "           2. 간식주문                       " << endl;
		cout << "           3. 자리이동                       " << endl;
		cout << "           4. 시간충전                       " << endl;
		cout << "           5. PC 종료                       " << endl;
		cout << "                                           " << endl;
		cout << "         원하는 항목의 숫자를 입력하세요.         " << endl;
		cout << "-------------------------------------------" << endl;
}
