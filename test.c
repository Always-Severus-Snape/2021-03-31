#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//����
enum Sex{
	MALE,
	FEMALE,
	UNKNOWN,
};

#define A 10

//�����Ķ���(����һ���µĺ���)
//int �����ķ���ֵ����
//Add ������
// int x int y,�����Ĳ���
//{}������
int Add(int x, int y){
	//sum
	int sum = x + y;
	// return ��ʾ����������. (����������)
	return sum;
}

int main(){
	//�����ʼ����ʱ�����ָ�������,��ǰ�����������óɳ�ֵ��,
	// �����ʣ�µı������ǳ�ʼ��Ϊ 0 
	int arr[10] = { 1, 2, 3, 4 };
	//�����ʹ�ú��Ĳ���[ ]ȡ�±����
	printf("%d\n", arr[1]);

	system("pause");
	return 0;
}