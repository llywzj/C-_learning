#include<iostream>
using namespace std;

int main()
{
	//const����ָ�루const���ε��ǽ������Ķ�����
	// 1.const����ָ�� - ����ָ��
	
	int a = 10;
	int b = 10;

	const int* p = &a;
	// �ص㣺ָ���ָ������޸ģ���ָ��ָ���ֵ���ɸ�
	//*p = 20    ������
	p = &b;

	// 2.const���γ��� - ָ�볣��
	int* const p2 = &a;
	// �ص㣺ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	// p2 = &b  ������
	*p2 = 100;

	// 3.const������ָ�룬�����γ���
	const int * const p3 = &a;
	//�ص㣺ָ���ָ���ָ��ָ���ֵ�������Ը�
	//*p3 = 100;������
	//p3 = &b;������
	

	system("pause");

	return 0;

}
