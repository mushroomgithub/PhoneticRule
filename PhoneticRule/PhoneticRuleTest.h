#pragma once


// CPhoneticRuleInfo �Ի���

class CPhoneticRuleInfo : public CDialogEx
{
	DECLARE_DYNAMIC(CPhoneticRuleInfo)

public:
	CPhoneticRuleInfo(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPhoneticRuleInfo();

// �Ի�������
	enum { IDD = IDD_DIALOG_RULE_INFO };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_strRuleInfo;
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
};
