#include<iostream>
using namespace std;

; int main()
{
	//if和switch区别
	//switch不能表示区间，只能表示整型或字符型
	// 一定要记得写break，否则会一直执行
	//switch结构清晰，执行效率高

	//switch语句
	//给一个电影进行打分
	//10-9  经典
	//7-8   非常好
	//5-6   一般
	//5以下 烂片

	//1.提示用户给电影评分
	cout << "请给这部电影进行打分" << endl;

	//2.用户开始经行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;

	//3.根据用户输入的分数来提示用户最后的结果
	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影非常好" << endl;
		break;
	case 7:
		cout << "您认为电影非常好" << endl;
		break;
	case 6:
		cout << "您认为电影一般" << endl;
		break;
	case 5:
		cout << "您认为电影一般" << endl;
		break;
	default :
		cout << "您认为电影是个烂片" << endl;
		break;
	}

	system("pause");

	return 0;
}