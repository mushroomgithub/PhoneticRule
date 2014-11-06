// createDAOBASE.h : main header file for the CREATEDAOBASE application
//

#if !defined(AFX_CREATEDAOBASE_H__D8DE9D2A_EC9D_4FCF_AE95_B66EF6FE4C6B__INCLUDED_)
#define AFX_CREATEDAOBASE_H__D8DE9D2A_EC9D_4FCF_AE95_B66EF6FE4C6B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCreateDAOBASEApp:
// See createDAOBASE.cpp for the implementation of this class
//

class CCreateDAOBASEApp : public CWinApp
{
public:
	CCreateDAOBASEApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCreateDAOBASEApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCreateDAOBASEApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CREATEDAOBASE_H__D8DE9D2A_EC9D_4FCF_AE95_B66EF6FE4C6B__INCLUDED_)
