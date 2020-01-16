#include <io.h>      
#include <string>    
#include <vector>    
#include <iostream>    
using namespace std;
//获取特定格式的文件名    
void getAllFiles(string path, vector<string>& files,string format); 

 
int main()
{
	string filePath,p;
	printf("请输入你想访问的目录；\n");	
	getline(cin,filePath);
	vector<string> files,files1;
	string format = "";	
	struct _finddata_t fileinfo;
	long hFile =0;
	if ((hFile = _findfirst(p.assign(filePath).append("\\*" + format).c_str(), &fileinfo)) != -1){			 //查找文件的格式
	getAllFiles(filePath, files,format);//获取文件名子函数 并逐一输出 
	
}
	else{
		printf("请输入有效目录！\n"); 
	}
	system("pause");
	return 0;
}

