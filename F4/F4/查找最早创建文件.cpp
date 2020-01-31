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
		const char* str=files[i].c_str();//�ļ���ַ 
    	long temp;
    	

    	hFile=_lopen(str,OF_READ);
  
   		FILETIME *CreationTime=new FILETIME;
    	FILETIME *LastAccessTime=new FILETIME;
    	FILETIME *LastWriteTime=new FILETIME;
    	SYSTEMTIME *STime=new SYSTEMTIME;//��ȡ����ʱ����Ϣ 

    	temp=GetFileTime((HANDLE*)hFile,CreationTime,LastAccessTime,LastWriteTime);
    	FileTimeToSystemTime(CreationTime,STime);//תΪϵͳʱ�� 
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
								year1=year,month1=month,day1=day,hour1=hour,minute1=minute,second1=second;//����ļ��Ƚ�  ��ʱ��������ļ����м�¼ 
							}
						}
					}
				}
			}
		}	
	}
    printf("���紴�����ļ�Ϊ��\n");
    cout<<filename<<endl;
    printf("����ʱ��Ϊ%04d�� %02d��%02d�� %02dʱ%02d��%02d��",year1,month1,day1,hour1,minute1,second1);
}
