#include <io.h>      
#include <string>    
#include <vector>    
#include <iostream>
#include<Windows.h>
#include <time.h>    
using namespace std;

void getfiletime(vector<string>& files){
	int year,month,day,hour,minute,second;
	int year1=10000,month1=10000,day1=10000,hour1=10000,minute1=10000,second1=10000;
	string filename;
	for(int i=0;i<files.size();i++){
		HFILE hFile;
		const char* str=files[i].c_str();//文件地址 
    	long temp;
    	

    	hFile=_lopen(str,OF_READ);
  
   		FILETIME *CreationTime=new FILETIME;
    	FILETIME *LastAccessTime=new FILETIME;
    	FILETIME *LastWriteTime=new FILETIME;
    	SYSTEMTIME *STime=new SYSTEMTIME;//获取创建时间信息 

    	temp=GetFileTime((HANDLE*)hFile,CreationTime,LastAccessTime,LastWriteTime);
    	FileTimeToSystemTime(CreationTime,STime);//转为系统时间 
    	year=STime->wYear;
    	month=STime->wMonth;
    	day=STime->wDay;
    	hour=STime->wHour;
    	minute=STime->wMinute;   	
		second=STime->wSecond;
		if(year<year1){
			if(month<month1){
				if(day<day1){
					if(hour<hour1){
						if(minute<minute1){
							if(second<second1){
								filename=files[i].c_str();
								year1=year,month1=month,day1=day,hour1=hour,minute1=minute,second1=second;//逐个文件比较  对时间最早的文件进行记录 
							}
						}
					}
				}
			}
		}	
	}
    printf("最早创建的文件为：\n");
    cout<<filename<<endl;
    printf("创建时间为%04d年 %02d月%02d日 %02d时%02d分%02d秒",year1,month1,day1,hour1,minute1,second1);
}
