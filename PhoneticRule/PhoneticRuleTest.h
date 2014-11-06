#pragma once


// CPhoneticRuleInfo 对话框

class CPhoneticRuleInfo : public CDialogEx
{
	DECLARE_DYNAMIC(CPhoneticRuleInfo)

public:
	CPhoneticRuleInfo(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CPhoneticRuleInfo();

// 对话框数据
	enum { IDD = IDD_DIALOG_RULE_INFO };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_strRuleInfo;
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
};
