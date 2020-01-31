#include <io.h>      
#include <string>    
#include <vector>    
#include <iostream>    
using namespace std;
//获取特定格式的文件名    
void getAllFiles(string path, vector<string>& files,string format); 
void getMarkedFiles(vector<string>& files,vector<string>&files1) ;
void getfiletime(vector<string>& files);

int main()
{
	string filePath,p;
	vector<string> files,files1,files2;
	string format = "";	
	struct _finddata_t fileinfo;
	long hFile =0;
	while ((hFile = _findfirst(p.assign(filePath).append("\\*" + format).c_str(), &fileinfo)) == -1);//判断文件是否存在 
	{	int a = 0;
		if (a>0){
			printf("\n\n！！该目录无效请输入正确目录！！\n"); 	
		} 		
		printf("请输入你想访问的目录；\n");	
		getline(cin,filePath);
		a++;
	}
	getAllFiles(filePath, files,format);//获取所有文件 
	getMarkedFiles(files,files1);//第一次关键字搜索 
	getMarkedFiles(files1,files2); //第二次关键字搜索 	
	getfiletime(files2);
	
	system("pause");
	return 0;
}

