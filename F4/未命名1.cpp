#include <io.h>      
#include <string>    
#include <vector>
#include <iostream>
using namespace std;
void getMarkedFiles(vector<string>& files,vector<string>& files1){  
	int size = files.size();
	string stbuf;
	char a[100];	
	printf("\n\n请输入你在这些文件中想要查找的关键字(或后缀名)：\n");
	gets(a);
	char *b = a;
	for (int i=0;i<size;i++){
		stbuf.clear();
		stbuf.assign(files[i].begin(),files[i].end());
		const char *c= stbuf.c_str();
		if(strstr(c,b)!=0){        //逐个文件对比  是否含有关键字  
			files1.push_back(files[i]);//保存含有关键字的文件 
		}
	}
	size = files1.size();
	if(size>0){
		printf ("\n\n含有该关键字(或后缀名)的文件有：\n\n");
	for (int i = 0;i<size;i++){
		cout << files1[i] << endl;
	}
	printf("\n\n含有该关键字(或后缀名)的文件共  %d  个\n",size);
	}
	else {
		printf("很抱歉，没有找到含有该关键字(或后缀名)的文件\n");
	}
	
	
}
