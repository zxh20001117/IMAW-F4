#include <io.h>      
#include <string>    
#include <vector>    
#include <iostream>    
using namespace std;
//��ȡ�ض���ʽ���ļ���    
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
	while ((hFile = _findfirst(p.assign(filePath).append("\\*" + format).c_str(), &fileinfo)) == -1);//�ж��ļ��Ƿ���� 
	{	int a = 0;
		if (a>0){
			printf("\n\n������Ŀ¼��Ч��������ȷĿ¼����\n"); 	
		} 		
		printf("������������ʵ�Ŀ¼��\n");	
		getline(cin,filePath);
		a++;
	}
	getAllFiles(filePath, files,format);//��ȡ�����ļ� 
	getMarkedFiles(files,files1);//��һ�ιؼ������� 
	getMarkedFiles(files1,files2); //�ڶ��ιؼ������� 	
	getfiletime(files2);
	
	system("pause");
	return 0;
}

