#include <io.h>      
#include <string>    
#include <vector>    
#include <iostream>    
using namespace std;
//��ȡ�ض���ʽ���ļ���    
void getAllFiles(string path, vector<string>& files,string format); 

 
int main()
{
	string filePath = "C:\\KuGou\\";
	vector<string> files;
	string format = "";				 //�����ļ��ĸ�ʽ
	getAllFiles(filePath, files,format);//��ȡ�ļ����Ӻ��� ����һ��� 
	system("pause");
	return 0;
}

