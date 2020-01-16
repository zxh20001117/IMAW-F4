#include <io.h>      
#include <string>    
#include <vector>    
#include <iostream>    
using namespace std;
//获取特定格式的文件名    
void getAllFiles(string path, vector<string>& files,string format); 

 
int main()
{
	string filePath = "C:\\KuGou\\";
	vector<string> files;
	string format = "";				 //查找文件的格式
	getAllFiles(filePath, files,format);//获取文件名子函数 并逐一输出 
	system("pause");
	return 0;
}

