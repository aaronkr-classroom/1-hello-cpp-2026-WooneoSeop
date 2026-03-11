#include <iostream>

int main(void) {

	/*cout은 출력을 담당하는 객체로써,
	스트림 삽임 연산자(stream insertion operator)인 <<를 이용해서 " " 안에 있는 문자열을 출력한다
	*/
	printf("Hell World");

	std::cout << "Hell World" << std::endl;
	//std :: cin >> "입력 받을 때"

	return 0; // 0= 오류 없이 종료

}