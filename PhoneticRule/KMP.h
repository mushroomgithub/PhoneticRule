#pragma once
class CKMP
{
public:
	CKMP(void);
	~CKMP(void);
public:
	int KMPMatch(char *s,char *p);
	void getNext(char *p,int *next);
	int BFMatch(char *s,char *p);
	void convertUtf8ToGBK(CString&   strUtf8);
	void convertGBKToUtf8(CString&   strGBK);
};

