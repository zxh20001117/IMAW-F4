#include <io.h>      
#include <string>    
#include <vector>    
#include <iostream>    
using namespace std;
//��ȡ�ض���ʽ���ļ���    
void getAllFiles(string path, vector<string>& files,string format); 

 
int main()
{
	string filePath,p;
	printf("������������ʵ�Ŀ¼��\n");	
	getline(cin,filePath);
	vector<string> files,files1;
	string format = "";	
	struct _finddata_t fileinfo;
	long hFile =0;
	if ((hFile = _findfirst(p.assign(filePath).append("\\*" + format).c_str(), &fileinfo)) != -1){			 //�����ļ��ĸ�ʽ
	getAllFiles(filePath, files,format);//��ȡ�ļ����Ӻ��� ����һ��� 
	
}
	else{
		printf("��������ЧĿ¼��\n"); 
	}
	system("pause");
	return 0;
}

