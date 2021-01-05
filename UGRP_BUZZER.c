#include <stdio.h>
#include <stdlib.h> //system 함수에 필요
#include <process.h> //CurrentDirectory 함수에 필요
#include <Windows.h> //system 함수에 필요

int main() //굳이 메인 형식일 필요 없음
{
	int err;
	char path[MAX_PATH];
	GetCurrentDirectoryA(MAX_PATH, path); //컴파일러가 작동되는 경로를 출력함
	printf("\nWorking Directory: %s\n", path); //buzzer.py 파일은 이 위치에 존재해야 한다.
	err = system("python buzzer.py");//cmd창에서 buzzer.py 실행하는 것과 같은 효과
	if (err == 2) // 파일 없는 경우, python 컴파일러가 2반환함
	{
		printf("NO buzzer.py file in Directory\n");// buzzer.py파일이 없다면 0이 반환되어 실행됨
		return 100;
	}
	return 0; // 정상 작동
}