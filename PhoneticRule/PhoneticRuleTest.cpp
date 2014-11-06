// PhoneticRuleTest.cpp : 实现文件
//

#include "stdafx.h"
#include "createDAOBASE.h"
#include "PhoneticRuleTest.h"
#include "afxdialogex.h"


// CPhoneticRuleInfo 对话框

IMPLEMENT_DYNAMIC(CPhoneticRuleInfo, CDialogEx)

CPhoneticRuleInfo::CPhoneticRuleInfo(CWnd* pParent /*=NULL*/)
	: CDialogEx(CPhoneticRuleInfo::IDD, pParent)
{

	m_strRuleInfo = _T("");
	m_strRuleInfo+=_T("一、语音字母有a.e,i,y,o.u 辅音字母有b,c,d,f,g,h,j,k,l,m,n,p,q,r,s,t,v,w,x,z。\r\n");
	m_strRuleInfo+=_T("\r\n二 、一个单词有一个元音字母或一个元音字母组（几个元音字母连在一起）时为一个音节，两个分隔\r\n\r\n      开的元音或元音字母组时为两个音节，三个或三个以上分隔开的元音或元音字母组时为多音节。\r\n");
	m_strRuleInfo+=_T("\r\n     注：当一个单词只有一个音节时，它们遵守如下规定：\r\n");
	m_strRuleInfo+=_T("\r\n           1.以元音字母结尾时，字母a 发[ei]，字母e 发[i: ]，字母i或y发 [ai] , 字母o发[əu] , 字母u发[ju:]\r\n");
	m_strRuleInfo+=_T("\r\n           2.以元音字母加辅音加上不发音的e 结尾时，字母a 发[ei]，字母e 发[i: ]，字母i或y发 [ai] , 字母o发[əu] , 字母u发[ju:]（发音方式与第1条相同）\r\n ");
	m_strRuleInfo+=_T("\r\n           3.以元音字母加上辅音字母结尾时，字母a 发[æ]，字母e 发[e]，字母i或y发 [i] ,字母o发[ɒ]，字母u发[ʌ]");
}

CPhoneticRuleInfo::~CPhoneticRuleInfo()
{
}

void CPhoneticRuleInfo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_RULE_INFO, m_strRuleInfo);
}


BEGIN_MESSAGE_MAP(CPhoneticRuleInfo, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// CPhoneticRuleInfo 消息处理程序


BOOL CPhoneticRuleInfo::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	UpdateData(FALSE);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}


void CPhoneticRuleInfo::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: 在此处添加消息处理程序代码
	// 不为绘图消息调用 CDialogEx::OnPaint()

}
