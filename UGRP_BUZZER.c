#include <stdio.h>
#include <stdlib.h> //system �Լ��� �ʿ�
#include <process.h> //CurrentDirectory �Լ��� �ʿ�
#include <Windows.h> //system �Լ��� �ʿ�

int main() //���� ���� ������ �ʿ� ����
{
	int err;
	char path[MAX_PATH];
	GetCurrentDirectoryA(MAX_PATH, path); //�����Ϸ��� �۵��Ǵ� ��θ� �����
	printf("\nWorking Directory: %s\n", path); //buzzer.py ������ �� ��ġ�� �����ؾ� �Ѵ�.
	err = system("python buzzer.py");//cmdâ���� buzzer.py �����ϴ� �Ͱ� ���� ȿ��
	if (err == 2) // ���� ���� ���, python �����Ϸ��� 2��ȯ��
	{
		printf("NO buzzer.py file in Directory\n");// buzzer.py������ ���ٸ� 0�� ��ȯ�Ǿ� �����
		return 100;
	}
	return 0; // ���� �۵�
}