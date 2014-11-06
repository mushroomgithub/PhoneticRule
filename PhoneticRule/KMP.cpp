#include "stdafx.h"
#include "KMP.h"


CKMP::CKMP(void)
{
}


CKMP::~CKMP(void)
{
}

int CKMP::KMPMatch(char *s,char *p)
{
	int next[100];
	int i,j;
	i=0;
	j=0;
	getNext(p,next);
	while(i<strlen(s)&&strlen(s)==strlen(p))
	{
		if(j==-1||s[i]==p[j])
		{
			i++;
			j++;
		}
		else
		{
			j=next[j];       //消除了指针i的回溯
		}
		if(j==strlen(p))
			return i-strlen(p);
	}
	return -1;
}

void CKMP::getNext(char *p,int *next)
{
	int j,k;
	next[0]=-1;
	j=0;
	k=-1;
	while(j<strlen(p)-1)
	{
		if(k==-1||p[j]==p[k])    //匹配的情况下,p[j]==p[k]
		{
			j++;
			k++;
			next[j]=k;
		}
		else                   //p[j]!=p[k]
			k=next[k];
	}

}

int CKMP::BFMatch(char *s,char *p)
{
	int i,j;
	i=0;
	while(i<strlen(s)&&strlen(s)==strlen(p))
	{
		j=0;
		while(s[i]==p[j]&&j<strlen(p))
		{
			i++;
			j++;
		}
		if(j==strlen(p))
			return i-strlen(p);
		i=i-j+1;                //指针i回溯
	}
	return -1;   
}

/*void CKMP::convertUtf8ToGBK(CString& strUtf8)
{
	USES_CONVERSION; 
	int   nLen   =   MultiByteToWideChar(CP_UTF8,   0,   W2A((LPCTSTR)strUtf8),   -1,   NULL,0); 
	wchar_t   *wszGBK   =   new   wchar_t[nLen+1]; 
	memset(wszGBK,   0,   (nLen+1)*sizeof(wchar_t)); 
	MultiByteToWideChar(CP_UTF8,   0,   W2A((LPCTSTR)strUtf8),   -1,   wszGBK,   nLen); 

	nLen   =   WideCharToMultiByte(CP_ACP,   0,   wszGBK,   -1,   NULL,   0,   NULL,   NULL);   
	char   *szGBK=new   char[nLen+1]; 
	memset(szGBK,   0,   nLen+1); 
	WideCharToMultiByte   (CP_ACP,   0,   wszGBK,   -1,   szGBK,   nLen,   NULL,NULL); 

	strUtf8   =   szGBK; 
	delete[]   szGBK; 
	delete[]   wszGBK; 
}*/