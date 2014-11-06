// createDAOBASEDlg.cpp : implementation file
//

#include "stdafx.h"
#include "createDAOBASE.h"
#include "createDAOBASEDlg.h"
#include <afxdao.h>
#include <tchar.h>

#include "KMP.h"
#include "PhoneticRuleTest.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCreateDAOBASEDlg dialog

CCreateDAOBASEDlg::CCreateDAOBASEDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCreateDAOBASEDlg::IDD, pParent)
	, m_Count(0)
{
	//{{AFX_DATA_INIT(CCreateDAOBASEDlg)
	// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	//  m_strNum = _T("");
	m_strDC = _T("");
	m_strCX = _T("");
	m_strHJ = _T("");
	m_strYB = _T("");
	//  m_strZW = 0;
	m_strNum = 0;
	m_strZW = _T("");
	m_Count=0;
	m_int=1;
	m_strLeaveNum = _T("");
	m_strBZ=_T("1、 手动向数据库中录入单词时请先输入单词总数目，之后点击剩余单词数目初始化，初始化剩余单词数目。\r\n\r\n");
	m_strBZ+=_T("2、 之后依次录入单词的各个属性，点击写入数据库按钮将录入单词写入数据库。\r\n\r\n");
	m_strBZ+=_T("3、 本次录入单词写入数据库之后，点击下一单词按钮，之后录入单词，直至所有单词全部录入数据库为止。");
	m_strRuleDC = _T("");
	m_strRuleCX = _T("");
	m_strRuleHJ = _T("");
	m_strRulePPL = _T("");
	m_strRuleYB = _T("");
	m_strRulePPYB = _T("");
}

void CCreateDAOBASEDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCreateDAOBASEDlg)
	// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
	//  DDX_Text(pDX, IDC_EDIT_NUM, m_strNum);
	DDX_Text(pDX, IDC_EDIT_DC, m_strDC);
	DDX_Text(pDX, IDC_EDIT_CX, m_strCX);
	DDX_Text(pDX, IDC_EDIT_HJ, m_strHJ);
	DDX_Text(pDX, IDC_EDIT_YB, m_strYB);
	//  DDX_Text(pDX, IDC_EDIT_ZW, m_strZW);
	DDX_Text(pDX, IDC_EDIT_NUM, m_strNum);
	DDX_Text(pDX, IDC_EDIT_ZW, m_strZW);
	DDX_Text(pDX, IDC_EDIT_LEVENUM, m_strLeaveNum);
	//  DDX_Control(pDX, IDC_EDIT_BZ, m_strBZ);
	DDX_Text(pDX, IDC_EDIT_BZ, m_strBZ);
	DDX_Control(pDX, IDC_PICTURE, m_Pciture);
	DDX_Text(pDX, IDC_EDIT_RULE_DC, m_strRuleDC);
	DDX_Text(pDX, IDC_EDIT_RULE_CX, m_strRuleCX);
	DDX_Text(pDX, IDC_EDIT_RULE_HJ, m_strRuleHJ);
	DDX_Text(pDX, IDC_EDIT_RULE_PPL, m_strRulePPL);
	DDX_Text(pDX, IDC_EDIT_RULE_YB, m_strRuleYB);
	DDX_Text(pDX, IDC_EDIT_RULE_PPYB, m_strRulePPYB);
}

BEGIN_MESSAGE_MAP(CCreateDAOBASEDlg, CDialog)
	//{{AFX_MSG_MAP(CCreateDAOBASEDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_WM_CREATE()
	ON_BN_CLICKED(IDC_BTN_XSJK, &CCreateDAOBASEDlg::OnBnClickedBtnXsjk)
	ON_BN_CLICKED(IDC_BTN_NEXT, &CCreateDAOBASEDlg::OnBnClickedBtnNext)
	ON_BN_CLICKED(IDC_BTN_INIT, &CCreateDAOBASEDlg::OnBnClickedBtnInit)
	ON_BN_CLICKED(IDC_BTN_PPSHOWDB, &CCreateDAOBASEDlg::OnBnClickedBtnPpshowdb)
	ON_BN_CLICKED(IDC_BUTTON1, &CCreateDAOBASEDlg::OnBnClickedButton1)
	ON_STN_CLICKED(IDC_PICTURE, &CCreateDAOBASEDlg::OnStnClickedPicture)
	ON_BN_CLICKED(IDC_BTN_RULE_TEST, &CCreateDAOBASEDlg::OnBnClickedBtnRuleTest)
	ON_BN_CLICKED(IDC_BTN_RULE_INIT, &CCreateDAOBASEDlg::OnBnClickedBtnRuleInit)
	ON_BN_CLICKED(IDC_BTN_EXIT, &CCreateDAOBASEDlg::OnBnClickedBtnExit)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCreateDAOBASEDlg message handlers

BOOL CCreateDAOBASEDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	strDbName=_T("phonetic.MDB");
	//Creatdb(strDbName);

	/*int m,i,j=0;
	CString str;
	VARIANT V;
	V.vt=VT_I4;
	V.intVal=0;
	
	while(j<6)
	{
		i=m_FlexGrid.get_Rows()+1;//获得当前行数+1
		m_FlexGrid.put_Rows(i);//设置行数
		m_FlexGrid.put_RowHeight(i-1,350);//设置新行的行高
		/*for(m=1;m<i;m++)//MSFlexGrid控件的插入测试，我们的原意是从数据库中读取数据到MSFlexGrid中
		{
			m_FlexGrid.put_Col(0);//定位列
			m_FlexGrid.put_Row(m);//定位行
			str.Format("%d",m);
			m_FlexGrid.put_Text(str);//设置该单元的值
		}*/
		/*str.Format("%d",i+j);
		for(int k=1;k<6;k++)
		{
			m_FlexGrid.put_TextMatrix(i-1,k,(LPCTSTR)str);
			m_FlexGrid.put_CellAlignment(4);//设置网格单元中间对齐
		}*/
		/*j++;
	}
	/////////////////////////////////////////////////////////////
	//*将数据库中的对应行列的值读到MSFlexGrid控件中
	//*此种方法目前显得比较笨拙，是因为我们采用的是一行一行的读取
	//*为此，我将在之后使用循环迭代的方法将数据库中的元素依次读出来
	////////////////////////////////////////////////////////////
	CString strID;
	COleVariant var;
	CDaoDatabase m_LongDB;
	CDaoTableDef m_NewTable(&m_LongDB);
	CDaoRecordset m_RecSet(&m_LongDB);
	m_LongDB.Open(strDbName);
	CString strRes="SELECT * FROM Res";
	m_RecSet.Open(AFX_DAO_USE_DEFAULT_TYPE,strRes,0);
	m_RecSet.MoveLast();
	while(j<m_RecSet.GetRecordCount())
	//while(j<60)
	{
		i=m_FlexGrid.get_Rows()+1;//获得当前行数+1
		m_FlexGrid.put_Rows(i);//设置行数
		m_FlexGrid.put_RowHeight(i-1,350);//设置新行的行高
		j++;
	}
	m_RecSet.Move(0);//移动到记录集的第一条记录
	i=1;
	//m_RecSet.MoveFirst();//同Move(0);
	
	while(!m_RecSet.IsEOF())
	{
		////////////////////////////////////////
		//将数据库中的第一列ID值读出来存到MSFlexGrid控件的第一列中
		////////////////////////////////////////
		m_RecSet.GetFieldValue(0,var);
		strID.Format("%d",var.intVal);
		m_FlexGrid.put_TextMatrix(i,0,(LPCTSTR)strID);

		for(j=1;j<6;j++)
		{
			m_RecSet.GetFieldValue(j,var);
			m_FlexGrid.put_TextMatrix(i,j,(LPCTSTR)var.bstrVal);
		}
		m_RecSet.MoveNext();
		i++;
	}
	m_RecSet.Close();
	m_LongDB.Close();
	Invalidate(TRUE);

	//m_FlexGrid.AboutBox();//弹出MSFlexGrid控件的关于信息
	m_FlexGrid.put_TextArray(0,"ID");//设置列标题头
	m_FlexGrid.put_TextArray(1,"单词");
	m_FlexGrid.put_TextArray(2,"词性");
	m_FlexGrid.put_TextArray(3,"汉语解释");
	m_FlexGrid.put_TextArray(4,"英标");
	m_FlexGrid.put_TextArray(5,"重读位置");
	m_FlexGrid.put_ColAlignment(0,4);//设置列的对齐方式
	m_FlexGrid.put_ColAlignment(1,4);
	m_FlexGrid.put_ColAlignment(2,4);
	m_FlexGrid.put_ColAlignment(3,4);
	m_FlexGrid.put_ColAlignment(4,4);
	m_FlexGrid.put_ColAlignment(5,4);
	m_FlexGrid.ShowWindow(SW_NORMAL);
	//m_FlexGrid.put_TopRow(m_FlexGrid.get_Rows()-1);
	//Invalidate(TRUE);*/

	CRect rect;
	m_Pciture.GetWindowRect(&rect);
	m_bitmap.LoadBitmap(IDB_BITMAP1);
	m_hBMP=(HBITMAP)m_bitmap.GetSafeHandle();
	m_Pciture.SetBitmap(m_hBMP);
	GetDlgItem(IDC_PICTURE)->MoveWindow(&rect);

	// 设置文本字体
	CDC *pDC=GetDC();
	CFont font,*pOldFont;
	LOGFONT lf;
	pDC->SetBkColor(RGB(0,0,0));
	pDC->SetTextColor(RGB(255,255,255));
	pOldFont = pDC->GetCurrentFont();//利用pOldFont获取当前字体
	pOldFont -> GetLogFont(&lf);//将当前字体信息存入lf LOGFONT结构体，为了下面可以对此结构体信息做修改，为生成新的字体做准备

	lf.lfWidth=8;//设置字体平均宽度
	lf.lfWeight=25;
	lf.lfHeight=16;
	lf.lfCharSet=GB2312_CHARSET;
	strcpy_s(lf.lfFaceName,_T("Lingoes Unicode"));
	//font.Detach();
	font.CreateFontIndirect(&lf);		//用修改过的字体结构体创建新的字体
	GetDlgItem(IDC_EDIT_RULE_YB)->SetFont(&font);
	GetDlgItem(IDC_EDIT_RULE_DC)->SetFont(&font);
	GetDlgItem(IDC_EDIT_RULE_CX)->SetFont(&font);
	GetDlgItem(IDC_EDIT_RULE_HJ)->SetFont(&font);
	GetDlgItem(IDC_EDIT_RULE_PPYB)->SetFont(&font);
	GetDlgItem(IDC_EDIT_RULE_PPL)->SetFont(&font);
	pDC->SelectObject(pOldFont);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCreateDAOBASEDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCreateDAOBASEDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCreateDAOBASEDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CCreateDAOBASEDlg::Creatdb(CString str)
{
	
	CDaoDatabase m_LongDB;
	CDaoTableDef   m_NewTable(&m_LongDB);
	CDaoRecordset RecSet(&m_LongDB);
	CString strsql=_T("SELECT * FROM ");
	CFileFind   finder;   

	//判断该数据库文件是否存在
    if(finder.FindFile(str))//如果该数据库已经存在，则删除
	{
		DeleteFile(str); //存在删除此文件
	}
	m_LongDB.Create(str);   
	if(m_LongDB.IsOpen()) //如果数据库创建成功，则表明数据库处于打开状态  
	{
		m_NewTable.Create(_T("Words")); //创建Words表
		m_NewTable.CreateField(_T("ID"),dbInteger,100);//创建Res表的域名(字段名)
		m_NewTable.CreateField(_T("单词"),dbText,200);
		m_NewTable.CreateField(_T("词性"),dbText,100);
		m_NewTable.CreateField(_T("英标"),dbText,100);
		m_NewTable.CreateField(_T("汉语解释"),dbText,100);
		m_NewTable.CreateField(_T("重读位置"),dbText,100);
		m_NewTable.Append(); //将表追加到新创建的数据库str中
		m_NewTable.Close();//关闭表*/
	}else
	{		
		m_NewTable.Close();
		AfxMessageBox(_T("数据库创建失败")); 		
	}
	m_LongDB.Close();//关闭数据库
}
void CCreateDAOBASEDlg::AddNewItem(int ID,CString strdc,CString strcx,CString strhj,CString stryb,CString strzw)
{
	CDaoDatabase m_LongDB;
	CDaoTableDef m_NewTable(&m_LongDB);
	CDaoRecordset m_RecSet(&m_LongDB);
	COleVariant var;
	CString strID;
	m_LongDB.Open(strDbName);
	CString sqlRes="SELECT * FROM Res";
	m_RecSet.Open(AFX_DAO_USE_DEFAULT_TYPE,sqlRes, 0);

	while (!m_RecSet.IsEOF())	
		m_RecSet.MoveNext();
	int count=m_RecSet.GetRecordCount();
	ID=count+1;
	m_RecSet.AddNew();
	strID.Format(_T("%d"),ID);
	FillVariant(var,strID);
	m_RecSet.SetFieldValue(_T("ID"),var);

	FillVariant(var,strdc);
	m_RecSet.SetFieldValue(_T("单词"),var);

	FillVariant(var,strcx);
	m_RecSet.SetFieldValue(_T("词性"),var);

	FillVariant(var,stryb);
	m_RecSet.SetFieldValue(_T("英标"),var);

	FillVariant(var,strhj);
	m_RecSet.SetFieldValue(_T("汉语解释"),var);

	FillVariant(var,strzw);
	m_RecSet.SetFieldValue(_T("重读位置"),var);

	m_RecSet.Update();
	m_RecSet.Close();
	m_LongDB.Close();
	MessageBox(_T("本次向数据库中手动单词成功"));
}

void CCreateDAOBASEDlg::FillVariant(COleVariant &var, LPCTSTR lpszSrc)
{
	var.vt=VT_BSTR;//将vt置为VT_BSTR类型，之后就可对VARIANT结构体中对应此类型的数据进行操作了
	if (lpszSrc==NULL)
		var.bstrVal=NULL;
	else
	{
#ifndef _UNICODE
		int nLen = lstrlen(lpszSrc);//提取ANSI标准的字符创长度
		var.bstrVal = SysAllocStringByteLen(lpszSrc, nLen);//需要一个ANSI字符串作为输入,并返回一个包含一个ANSI字符串型.nlen表示要拷贝到var.bstrVal中的字符串lpszSrc的长度，其后自动追加一个空字符
#else//表示在UNICODE编码下
		var.bstrVal = SysAllocString(lpszSrc);//在32位应用程序中，表示将一个UNICODE表示的字符串拷贝到var.bstrVal中，在16位应用程序中，则将ANSI表示的字符串进行拷贝
#endif
	}
}

int CCreateDAOBASEDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	m_FlexGrid.Create(_T("MS"),WS_CHILD|WS_VISIBLE|WS_DLGFRAME,CRect(180,150,860,320),this,123);
	m_FlexGrid.put_FixedCols(0);//设置固定列数为0
	m_FlexGrid.put_FixedRows(0);//设置固定行数为0
	//m_FlexGrid.put_FixedCols(1);//设置固定列数为1
	//m_FlexGrid.put_FixedRows(1);//设置固定行数为1
	m_FlexGrid.put_Rows(0);//初始设置行数为0，之后动态设置行数
	m_FlexGrid.put_Cols(6);//设置列数为6
	m_FlexGrid.put_BackColor(RGB(0,255,255));//设置控件背景色
	m_FlexGrid.put_GridColor(RGB(0,255,0));//设置网格线的颜色
	m_FlexGrid.put_ColWidth(0,1242);//设置列宽
	m_FlexGrid.put_ColWidth(1,1500);
	m_FlexGrid.put_ColWidth(2,1240);
	m_FlexGrid.put_ColWidth(3,1600);
	m_FlexGrid.put_ColWidth(4,3000);
	m_FlexGrid.put_ColWidth(5,1239);
	
	//m_FlexGrid.ShowWindow(SW_HIDE);
	return 0;
}


void CCreateDAOBASEDlg::OnBnClickedBtnXsjk()//写数据库
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if(m_int<=m_strNum)
	{
		AddNewItem(m_int,m_strDC,m_strCX,m_strHJ,m_strYB,m_strZW);
		m_int++;
	}
		
}


void CCreateDAOBASEDlg::OnBnClickedBtnNext()//下一个单词
{
	// TODO: 在此添加控件通知处理程序代码
	m_strDC=_T("");
	m_strCX=_T("");
	m_strHJ=_T("");
	m_strYB=_T("");
	m_strZW=_T("");
	m_Count--;
	m_str.Format(_T("%d"),m_Count);
	m_strLeaveNum=m_str;
	if(m_strLeaveNum==_T('0'))
		MessageBox(_T("所有单词都已经存入数据库！"));
	UpdateData(FALSE);
}


void CCreateDAOBASEDlg::OnBnClickedBtnInit()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_Count=m_strNum;
	m_str.Format(_T("%d"),m_Count);
	m_strLeaveNum=m_str;
	UpdateData(FALSE);
}


void CCreateDAOBASEDlg::OnBnClickedBtnPpshowdb()	//显示数据库匹配信息
{
	// TODO: 在此添加控件通知处理程序代码
	int m,i,j=0;
	CString str;
	VARIANT V;
	V.vt=VT_I4;
	V.intVal=0;
	
	while(j<6)
	{
		i=m_FlexGrid.get_Rows()+1;//获得当前行数+1
		m_FlexGrid.put_Rows(i);//设置行数
		m_FlexGrid.put_RowHeight(i-1,350);//设置新行的行高

		j++;
	}
	// 设置文本字体
	//CDC *pDC=GetDC();
	CDC *pDC=m_FlexGrid.GetDC();
	CFont font,*pOldFont;
	LOGFONT lf;
	pDC->SetBkColor(RGB(0,0,0));
	pDC->SetTextColor(RGB(255,255,255));
	pOldFont = pDC->GetCurrentFont();//利用pOldFont获取当前字体
	pOldFont -> GetLogFont(&lf);//将当前字体信息存入lf LOGFONT结构体，为了下面可以对此结构体信息做修改，为生成新的字体做准备

	lf.lfWidth=8;//设置字体平均宽度
	lf.lfWeight=25;
	lf.lfHeight=16;
	lf.lfCharSet=GB2312_CHARSET;
	strcpy_s(lf.lfFaceName,_T("Lingoes Unicode"));
	//font.Detach();
	font.CreateFontIndirect(&lf);//用修改过的字体结构体创建新的字体
	m_FlexGrid.SetFont(&font);
	pDC->SelectObject(pOldFont);
	m_FlexGrid.put_FontName(_T("Lingoes Unicode"));//设置MSFlexGrid字体

	CString strID;
	COleVariant var;
	CDaoDatabase m_LongDB;
	CDaoTableDef m_NewTable(&m_LongDB);
	CDaoRecordset m_RecSet(&m_LongDB);
	m_LongDB.Open(strDbName);
	CString strRes=_T("SELECT * FROM Res");
	m_RecSet.Open(AFX_DAO_USE_DEFAULT_TYPE,strRes,0);
	while (!m_RecSet.IsEOF())	
		m_RecSet.MoveNext();
	int count=m_RecSet.GetRecordCount();
	m_RecSet.MoveFirst();
	j=0;
	while(j<count)
	{
		i=m_FlexGrid.get_Rows()+1;//获得当前行数+1
		m_FlexGrid.put_Rows(i);//设置行数
		m_FlexGrid.put_RowHeight(i-1,350);//设置新行的行高
		j++;
	}
	m_RecSet.Move(0);//移动到记录集的第一条记录
	i=1;
	//m_RecSet.MoveFirst();//同Move(0);
	
	while(!m_RecSet.IsEOF())
	{
		///////////////////////////////////////////////////////////////////////
		//将数据库中的第一列ID值读出来存到MSFlexGrid控件的第一列中
		//////////////////////////////////////////////////////////////////////
		m_RecSet.GetFieldValue(0,var);
		strID.Format(_T("%d"),var.intVal);
		m_FlexGrid.put_TextMatrix(i,0,(LPCTSTR)strID);

		for(j=1;j<6;j++)
		{
			m_RecSet.GetFieldValue(j,var);
			m_FlexGrid.put_TextMatrix(i,j,(LPCTSTR)var.bstrVal);
		}
		m_RecSet.MoveNext();
		i++;
	}
	m_RecSet.Close();
	m_LongDB.Close();
	Invalidate(TRUE);

	//m_FlexGrid.AboutBox();//弹出MSFlexGrid控件的关于信息
	m_FlexGrid.put_TextArray(0,_T("ID"));//设置列标题头
	m_FlexGrid.put_TextArray(1,_T("单词"));
	m_FlexGrid.put_TextArray(2,_T("词性"));
	m_FlexGrid.put_TextArray(3,_T("英标"));
	m_FlexGrid.put_TextArray(4,_T("汉语解释"));
	m_FlexGrid.put_TextArray(5,_T("重读位置"));
	m_FlexGrid.put_ColAlignment(0,4);//设置列的对齐方式
	m_FlexGrid.put_ColAlignment(1,4);
	m_FlexGrid.put_ColAlignment(2,4);
	m_FlexGrid.put_ColAlignment(3,4);
	m_FlexGrid.put_ColAlignment(4,4);
	m_FlexGrid.put_ColAlignment(5,4);

	m_FlexGrid.ShowWindow(SW_NORMAL);
	//m_FlexGrid.put_TopRow(m_FlexGrid.get_Rows()-1);
	//Invalidate(TRUE);
}


void CCreateDAOBASEDlg::OnBnClickedButton1() //打开规则说明对话框
{
	// TODO: 在此添加控件通知处理程序代码
	CPhoneticRuleInfo pRuleTestDlg;
	pRuleTestDlg.DoModal();
}


void CCreateDAOBASEDlg::OnStnClickedPicture()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CCreateDAOBASEDlg::OnBnClickedBtnRuleTest()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	//MessageBox(m_strRuleDC);
	CKMP kmp;
	CString strDC;
	COleVariant var;
	int j,intKmp;
	CDaoDatabase m_LongDB;
	CDaoTableDef m_NewTable(&m_LongDB);
	CDaoRecordset m_RecSet(&m_LongDB);
	m_LongDB.Open(strDbName);
	CString strRes=_T("SELECT * FROM Res");
	m_RecSet.Open(AFX_DAO_USE_DEFAULT_TYPE,strRes,0);

	while(!m_RecSet.IsEOF())
	{
		m_RecSet.GetFieldValue(1,var);
		strDC=(LPSTR)(LPCTSTR)var.bstrVal;
		//MessageBox(strDC);
		//intKmp=kmp.BFMatch(m_strRuleDC.GetBuffer(),strDC.GetBuffer());
		intKmp=kmp.KMPMatch(m_strRuleDC.GetBuffer(),strDC.GetBuffer());
		if(intKmp==0)
		{
			m_RecSet.GetFieldValue(4,var);
			m_strRuleHJ=(LPSTR)(LPCTSTR)var.bstrVal;
			m_RecSet.GetFieldValue(3,var);
			m_strRuleYB=(LPSTR)(LPCTSTR)var.bstrVal;
			m_RecSet.GetFieldValue(2,var);
			m_strRuleCX=(LPSTR)(LPCTSTR)var.bstrVal;

			UpdateData(FALSE);
			return;
		}
		m_RecSet.MoveNext();
	}
	MessageBox(_T("数据库中没有该单词！\r\n请检查你的输入."),_T("PhoneticRule"),MB_ICONWARNING | MB_OK);
	m_RecSet.Close();
	m_LongDB.Close();
}


void CCreateDAOBASEDlg::OnBnClickedBtnRuleInit()
{
	// TODO: 在此添加控件通知处理程序代码
	m_strRuleDC=_T("");
	m_strRuleCX=_T("");
	m_strRuleHJ=_T("");
	m_strRuleYB=_T("");
	m_strRulePPYB=_T("");
	m_strRulePPL=_T("");
	UpdateData(FALSE);
}

void CCreateDAOBASEDlg::OnBnClickedBtnExit()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnCancel();
}



void CCreateDAOBASEDlg::OnOK()
{
	// TODO: 在此添加专用代码和/或调用基类
	OnBnClickedBtnRuleTest();
	//CDialog::OnOK();
}
