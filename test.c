#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//类型
enum Sex{
	MALE,
	FEMALE,
	UNKNOWN,
};

#define A 10

//函数的定义(创建一个新的函数)
//int 函数的返回值类型
//Add 函数名
// int x int y,函数的参数
//{}函数体
int Add(int x, int y){
	//sum
	int sum = x + y;
	// return 表示函数返回了. (函数结束了)
	return sum;
}

int main(){
	//如果初始化的时候数字个数较少,把前几个变量设置成初值了,
	// 后面的剩下的变量都是初始化为 0 
	int arr[10] = { 1, 2, 3, 4 };
	//数组的使用核心操作[ ]取下标操作
	printf("%d\n", arr[1]);

	system("pause");
	return 0;
}