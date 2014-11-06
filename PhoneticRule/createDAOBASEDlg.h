// createDAOBASEDlg.h : header file
//

#if !defined(AFX_CREATEDAOBASEDLG_H__2DDB1995_001C_42D2_8E88_642DBB6D9109__INCLUDED_)
#define AFX_CREATEDAOBASEDLG_H__2DDB1995_001C_42D2_8E88_642DBB6D9109__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "CMSFlexGrid.h"
/////////////////////////////////////////////////////////////////////////////
// CCreateDAOBASEDlg dialog

class CCreateDAOBASEDlg : public CDialog
{
// Construction
public:
	CCreateDAOBASEDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCreateDAOBASEDlg)
	enum { IDD = IDD_CREATEDAOBASE_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCreateDAOBASEDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCreateDAOBASEDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	void Creatdb(CString str);//创建数据库
	void AddNewItem(int ID,CString strdc,CString strcx,CString strhj,CString stryb,CString strzw);//向数据库表中增加记录
	void FillVariant(COleVariant &var, LPCTSTR lpszSrc);//将字符串类型转换为COleVariant类型，便于操作数据库，这里便于我们将字符串数据通过setFieldValue()函数写入数据库表中

	CString strDbName;//存放要创建的数据库名
	CMSFlexGrid m_FlexGrid;//MSFlexGrid控件变量
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);//创建MSFlexGrid控件，以及控件的初始化设置
//	CString m_strNum;
	CString m_strDC;
	CString m_strCX;
	CString m_strHJ;
	CString m_strYB;
//	int m_strZW;
	int m_strNum;
	CString m_strZW;
	afx_msg void OnBnClickedBtnXsjk();//写数据库文件
	afx_msg void OnBnClickedBtnNext();//写一个单词消息响应函数
	int m_Count;//保存还有多少单词没有写入数据库
	int m_int;
	CString m_strLeaveNum;//格式化m_Count
	CString m_str;
	afx_msg void OnBnClickedBtnInit();//初始化
	afx_msg void OnBnClickedBtnPpshowdb();
//	CEdit m_strBZ;
	CString m_strBZ;
	afx_msg void OnBnClickedButton1();
private:
	CBitmap m_bitmap;
	HBITMAP m_hBMP;
public:
	CStatic m_Pciture;
	afx_msg void OnStnClickedPicture();
	CString m_strRuleDC;
	CString m_strRuleCX;
	CString m_strRuleHJ;
	CString m_strRulePPL;
	CString m_strRuleYB;
	CString m_strRulePPYB;
	afx_msg void OnBnClickedBtnRuleTest();
	afx_msg void OnBnClickedBtnRuleInit();
	afx_msg void OnBnClickedBtnExit();
//	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual void OnOK();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CREATEDAOBASEDLG_H__2DDB1995_001C_42D2_8E88_642DBB6D9109__INCLUDED_)
