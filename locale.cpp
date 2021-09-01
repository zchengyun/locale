#include <iostream>
//包含了用于描述不同地区不同国家在某写方面的不同习惯。如货币，时间，数量等格式。
#include <locale>
#include <ctime>
int main()
{
	// 输出
	std::wcout << 1000.01 << '\n';
	std::locale::global(std::locale("zh_CN.UTF-8"));//设置为zh_CN.UTF-8格式
	// 将新的全局语言环境用于未来的宽字符输出
	std::wcout.imbue(std::locale());
	// 再次输出
	std::wcout << 1000.01 << '\n';

	std::locale l1;  
	std::locale l2("en_US.UTF-8"); 
	std::cout << "Locale names:\nl1: " << l1.name() << "\nl2: " << l2.name()<< '\n';

}

