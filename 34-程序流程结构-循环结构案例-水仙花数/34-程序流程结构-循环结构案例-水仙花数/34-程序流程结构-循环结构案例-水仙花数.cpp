#include<iostream>
using namespace std;

int main()
{
	//ˮ�ɻ�����ָһ����λ������ÿ��λ�ϵ����η�֮����������
	//1.��������λ���������
	int num = 100;

	do
	{
		//2.��������λ�����ҵ�ˮ�ɻ���
		int a = 0;
		int b = 0;
		int c = 0;
		a = num % 10;       //��ȡ��λ   ��153%10 = 3)
		b = (num / 10) % 10;	//��ȡʮλ   ��153/10 = 15   15%10 = 5)
		c = num / 100;	    //��ȡ��λ   ��153/100 = 1)
		if (a*a*a + b*b*b + c*c*c == num)
		{
			cout << num << endl;
			
		}
		num++;
	} while (num < 1000);
	


	system("pause");
	
	return 0;

}


// ���Դ��Source��Դͷ����Ϊ�����ṩ�������Դͷ��
// ����ֿ�
// ��������������������������غͰ�װ
// ubuntu: apt
// ������ sudo apt search ***
// ��װ�� sudo apt install ***
// ж�أ� sudo apt remove ***           // sudo = super user do

// ��·��
// �����µ��ԣ���Ҫ�����Դ�� sudo nano /etc/apt/Sources.list
// sudo apt update
// sudo apt install ***     ��װ�������