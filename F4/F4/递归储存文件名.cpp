#include <io.h>      
#include <string>    
#include <vector>    
#include <iostream>
using namespace std;
void getAllFiles(string path, vector<string>& files,string format)
{	
	long  hFile = 0;
	struct _finddata_t fileinfo;//�ļ���Ϣ 
	string p;
	if ((hFile = _findfirst(p.assign(path).append("\\*" + format).c_str(), &fileinfo)) != -1) //�ļ�����
	{
		do
		{
			if ((fileinfo.attrib & _A_SUBDIR))//�ж��Ƿ�Ϊ�ļ���
			{
				if (strcmp(fileinfo.name, ".") != 0 && strcmp(fileinfo.name, "..") != 0)//�ļ������в���"."��".."
				{
					files.push_back(p.assign(path).append("\\").append(fileinfo.name)); //�����ļ�����
					getAllFiles(p.assign(path).append("\\").append(fileinfo.name), files,format); //�ݹ�����ļ���
				}
			}
			else
			{
				files.push_back(p.assign(path).append("\\").append(fileinfo.name));//��������ļ��У������ļ���
			}
		} while (_findnext(hFile, &fileinfo) == 0);
		_findclose(hFile);
	}
	int size = files.size();
	for (int i = 0; i<size; i++)
	{
		cout << files[i] << endl;		 
	}
	printf("\n\n������������Ϊ��Ŀ¼�������ļ���������\n\n");
}
