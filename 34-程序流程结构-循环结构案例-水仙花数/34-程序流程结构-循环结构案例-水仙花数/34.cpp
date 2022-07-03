#include<iostream>
using namespace std;

int main()
{
	//水仙花数是指一个三位数，它每个位上的三次方之和是它本身
	//1.将所有三位数进行输出
	int num = 100;

	do
	{
		//2.在所有三位数中找到水仙花数
		int a = 0;
		int b = 0;
		int c = 0;
		a = num % 10;       //获取个位   （153%10 = 3)
		b = (num / 10) % 10;	//获取十位   （153/10 = 15   15%10 = 5)
		c = num / 100;	    //获取百位   （153/100 = 1)
		if (a*a*a + b*b*b + c*c*c == num)
		{
			cout << num << endl;
			
		}
		num++;
	} while (num < 1000);
	


	system("pause");
	
	return 0;

}


// 软件源（Source，源头，是为我们提供软件包的源头）
// 软件仓库
// 【包管理器】进行软件包的下载和安装
// ubuntu: apt
// 搜索： sudo apt search ***
// 安装： sudo apt install ***
// 卸载： sudo apt remove ***           // sudo = super user do

// 套路：
// 对于新电脑，需要配软件源： sudo nano /etc/apt/Sources.list
// sudo apt update
// sudo apt install ***     安装其他软件