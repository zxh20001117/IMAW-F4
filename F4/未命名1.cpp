#include <io.h>      
#include <string>    
#include <vector>
#include <iostream>
using namespace std;
void getMarkedFiles(vector<string>& files,vector<string>& files1){  
	int size = files.size();
	string stbuf;
	char a[100];	
	printf("\n\n������������Щ�ļ�����Ҫ���ҵĹؼ���(���׺��)��\n");
	gets(a);
	char *b = a;
	for (int i=0;i<size;i++){
		stbuf.clear();
		stbuf.assign(files[i].begin(),files[i].end());
		const char *c= stbuf.c_str();
		if(strstr(c,b)!=0){        //����ļ��Ա�  �Ƿ��йؼ���  
			files1.push_back(files[i]);//���溬�йؼ��ֵ��ļ� 
		}
	}
	size = files1.size();
	if(size>0){
		printf ("\n\n���иùؼ���(���׺��)���ļ��У�\n\n");
	for (int i = 0;i<size;i++){
		cout << files1[i] << endl;
	}
	printf("\n\n���иùؼ���(���׺��)���ļ���  %d  ��\n",size);
	}
	else {
		printf("�ܱ�Ǹ��û���ҵ����иùؼ���(���׺��)���ļ�\n");
	}
	
	
}
