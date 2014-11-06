// CMSFlexGrid.h : �� Microsoft Visual C++ ������ ActiveX �ؼ���װ�������

#pragma once

/////////////////////////////////////////////////////////////////////////////
// CMSFlexGrid

class CMSFlexGrid : public CWnd
{
protected:
	DECLARE_DYNCREATE(CMSFlexGrid)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x6262D3A0, 0x531B, 0x11CF, { 0x91, 0xF6, 0xC2, 0x86, 0x3C, 0x38, 0x5E, 0x30 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// ����
public:

// ����
public:

	long get_Rows()
	{
		long result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Rows(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Cols()
	{
		long result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Cols(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_FixedRows()
	{
		long result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_FixedRows(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_FixedCols()
	{
		long result;
		InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_FixedCols(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_Version()
	{
		short result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	CString get_FormatString()
	{
		CString result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_FormatString(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_TopRow()
	{
		long result;
		InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_TopRow(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_LeftCol()
	{
		long result;
		InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_LeftCol(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Row()
	{
		long result;
		InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Row(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Col()
	{
		long result;
		InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Col(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_RowSel()
	{
		long result;
		InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_RowSel(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ColSel()
	{
		long result;
		InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ColSel(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Text()
	{
		CString result;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Text(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_BackColor()
	{
		unsigned long result;
		InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_BackColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_ForeColor()
	{
		unsigned long result;
		InvokeHelper(DISPID_FORECOLOR, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_ForeColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(DISPID_FORECOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_BackColorFixed()
	{
		unsigned long result;
		InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_BackColorFixed(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_ForeColorFixed()
	{
		unsigned long result;
		InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_ForeColorFixed(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_BackColorSel()
	{
		unsigned long result;
		InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_BackColorSel(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_ForeColorSel()
	{
		unsigned long result;
		InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_ForeColorSel(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_BackColorBkg()
	{
		unsigned long result;
		InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_BackColorBkg(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_WordWrap()
	{
		BOOL result;
		InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_WordWrap(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Font()
	{
		LPDISPATCH result;
		InvokeHelper(DISPID_FONT, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void putref_Font(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(DISPID_FONT, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	float get_FontWidth()
	{
		float result;
		InvokeHelper(0x54, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_FontWidth(float newValue)
	{
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x54, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_CellFontName()
	{
		CString result;
		InvokeHelper(0x4d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_CellFontName(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_CellFontSize()
	{
		float result;
		InvokeHelper(0x4e, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_CellFontSize(float newValue)
	{
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x4e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_CellFontBold()
	{
		BOOL result;
		InvokeHelper(0x4f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_CellFontBold(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x4f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_CellFontItalic()
	{
		BOOL result;
		InvokeHelper(0x50, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_CellFontItalic(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x50, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_CellFontUnderline()
	{
		BOOL result;
		InvokeHelper(0x51, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_CellFontUnderline(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x51, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_CellFontStrikeThrough()
	{
		BOOL result;
		InvokeHelper(0x52, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_CellFontStrikeThrough(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x52, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_CellFontWidth()
	{
		float result;
		InvokeHelper(0x53, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_CellFontWidth(float newValue)
	{
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x53, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_TextStyle()
	{
		long result;
		InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_TextStyle(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_TextStyleFixed()
	{
		long result;
		InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_TextStyleFixed(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ScrollTrack()
	{
		BOOL result;
		InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ScrollTrack(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x16, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_FocusRect()
	{
		long result;
		InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_FocusRect(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_HighLight()
	{
		long result;
		InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_HighLight(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Redraw()
	{
		BOOL result;
		InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Redraw(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x19, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ScrollBars()
	{
		long result;
		InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ScrollBars(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_MouseRow()
	{
		long result;
		InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_MouseCol()
	{
		long result;
		InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_CellLeft()
	{
		long result;
		InvokeHelper(0x1d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_CellTop()
	{
		long result;
		InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_CellWidth()
	{
		long result;
		InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_CellHeight()
	{
		long result;
		InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_RowHeightMin()
	{
		long result;
		InvokeHelper(0x21, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_RowHeightMin(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x21, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_FillStyle()
	{
		long result;
		InvokeHelper(DISPID_FILLSTYLE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_FillStyle(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(DISPID_FILLSTYLE, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_GridLines()
	{
		long result;
		InvokeHelper(0x22, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_GridLines(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x22, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_GridLinesFixed()
	{
		long result;
		InvokeHelper(0x23, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_GridLinesFixed(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x23, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_GridColor()
	{
		unsigned long result;
		InvokeHelper(0x24, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_GridColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x24, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_GridColorFixed()
	{
		unsigned long result;
		InvokeHelper(0x25, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_GridColorFixed(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x25, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_CellBackColor()
	{
		unsigned long result;
		InvokeHelper(0x26, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_CellBackColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x26, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_CellForeColor()
	{
		unsigned long result;
		InvokeHelper(0x27, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_CellForeColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0x27, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_CellAlignment()
	{
		short result;
		InvokeHelper(0x28, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_CellAlignment(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x28, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_CellTextStyle()
	{
		long result;
		InvokeHelper(0x29, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_CellTextStyle(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x29, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_CellPictureAlignment()
	{
		short result;
		InvokeHelper(0x2b, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_CellPictureAlignment(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x2b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Clip()
	{
		CString result;
		InvokeHelper(0x2d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Clip(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x2d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void put_Sort(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x2e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_SelectionMode()
	{
		long result;
		InvokeHelper(0x2f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_SelectionMode(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x2f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_MergeCells()
	{
		long result;
		InvokeHelper(0x30, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_MergeCells(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x30, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_AllowBigSelection()
	{
		BOOL result;
		InvokeHelper(0x33, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AllowBigSelection(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x33, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_AllowUserResizing()
	{
		long result;
		InvokeHelper(0x34, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_AllowUserResizing(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x34, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_BorderStyle()
	{
		long result;
		InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_BorderStyle(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_hWnd()
	{
		long result;
		InvokeHelper(DISPID_HWND, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_Enabled()
	{
		BOOL result;
		InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Enabled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Appearance()
	{
		long result;
		InvokeHelper(DISPID_APPEARANCE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Appearance(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(DISPID_APPEARANCE, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_MousePointer()
	{
		long result;
		InvokeHelper(0x35, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_MousePointer(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x35, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_MouseIcon()
	{
		LPDISPATCH result;
		InvokeHelper(0x36, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void putref_MouseIcon(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x36, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PictureType()
	{
		long result;
		InvokeHelper(0x32, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PictureType(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x32, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Picture()
	{
		LPDISPATCH result;
		InvokeHelper(0x31, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_CellPicture()
	{
		LPDISPATCH result;
		InvokeHelper(0x2a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void putref_CellPicture(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x2a, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	void AboutBox()
	{
		InvokeHelper(DISPID_ABOUTBOX, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString get_TextArray(long index)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x37, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, index);
		return result;
	}
	void put_TextArray(long index, LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_BSTR ;
		InvokeHelper(0x37, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, index, newValue);
	}
	short get_ColAlignment(long index)
	{
		short result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x38, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, parms, index);
		return result;
	}
	void put_ColAlignment(long index, short newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I2 ;
		InvokeHelper(0x38, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, index, newValue);
	}
	long get_ColWidth(long index)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x39, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, index);
		return result;
	}
	void put_ColWidth(long index, long newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x39, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, index, newValue);
	}
	long get_RowHeight(long index)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, index);
		return result;
	}
	void put_RowHeight(long index, long newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x3a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, index, newValue);
	}
	BOOL get_MergeRow(long index)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms, index);
		return result;
	}
	void put_MergeRow(long index, BOOL newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL ;
		InvokeHelper(0x3b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, index, newValue);
	}
	BOOL get_MergeCol(long index)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms, index);
		return result;
	}
	void put_MergeCol(long index, BOOL newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL ;
		InvokeHelper(0x3c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, index, newValue);
	}
	void put_RowPosition(long index, long newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x3d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, index, newValue);
	}
	void put_ColPosition(long index, long newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x3e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, index, newValue);
	}
	long get_RowData(long index)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, index);
		return result;
	}
	void put_RowData(long index, long newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x3f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, index, newValue);
	}
	long get_ColData(long index)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, index);
		return result;
	}
	void put_ColData(long index, long newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x40, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, index, newValue);
	}
	CString get_TextMatrix(long Row, long Col)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x41, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, Row, Col);
		return result;
	}
	void put_TextMatrix(long Row, long Col, LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_BSTR ;
		InvokeHelper(0x41, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, Row, Col, newValue);
	}
	void AddItem(LPCTSTR Item, VARIANT index)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT ;
		InvokeHelper(0x42, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Item, &index);
	}
	void RemoveItem(long index)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x43, DISPATCH_METHOD, VT_EMPTY, NULL, parms, index);
	}
	void Clear()
	{
		InvokeHelper(0x44, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Refresh()
	{
		InvokeHelper(DISPID_REFRESH, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_DataSource()
	{
		LPDISPATCH result;
		InvokeHelper(0x4c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void put_DataSource(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x4c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_RowIsVisible(long index)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x55, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms, index);
		return result;
	}
	BOOL get_ColIsVisible(long index)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x56, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms, index);
		return result;
	}
	long get_RowPos(long index)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x57, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, index);
		return result;
	}
	long get_ColPos(long index)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x58, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, index);
		return result;
	}
	short get_GridLineWidth()
	{
		short result;
		InvokeHelper(0x59, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_GridLineWidth(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x59, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_FixedAlignment(long index)
	{
		short result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x5a, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, parms, index);
		return result;
	}
	void put_FixedAlignment(long index, short newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I2 ;
		InvokeHelper(0x5a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, index, newValue);
	}
	CString get_FontName()
	{
		CString result;
		InvokeHelper(0x5b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_FontName(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x5b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_FontSize()
	{
		float result;
		InvokeHelper(0x5c, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_FontSize(float newValue)
	{
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x5c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_FontBold()
	{
		BOOL result;
		InvokeHelper(0x5d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_FontBold(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x5d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_FontItalic()
	{
		BOOL result;
		InvokeHelper(0x5e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_FontItalic(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x5e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_FontStrikethru()
	{
		BOOL result;
		InvokeHelper(0x5f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_FontStrikethru(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x5f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_FontUnderline()
	{
		BOOL result;
		InvokeHelper(0x60, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_FontUnderline(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x60, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_RightToLeft()
	{
		BOOL result;
		InvokeHelper(0xfffffd9d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_RightToLeft(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xfffffd9d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_OLEDropMode()
	{
		long result;
		InvokeHelper(0x60f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_OLEDropMode(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x60f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void OLEDrag()
	{
		InvokeHelper(0x610, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}


};
