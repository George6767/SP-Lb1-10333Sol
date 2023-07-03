#include <Windows.h>



int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE
	hPrevInstance,
	LPSTR lpszCmdLine, int nCmdShow)
{
	LPCTSTR lpszHelloText = TEXT("Hello World Win32 GUI Application");
		LPCTSTR lpszHelloWndTitle = TEXT("���� ���������");
	INT iVar = MessageBox(NULL, lpszHelloText, lpszHelloWndTitle, MB_YESNO | MB_ICONSTOP);
	///
	int iRetValue1, iRetValue2;
	LPCTSTR lpszMesBoxTitle = TEXT("������� MessageBox");
	LPCTSTR lpszResponce;
	do {
		iRetValue1 = MessageBox(NULL, TEXT("������� ���� �� ������."),
			lpszMesBoxTitle,
			MB_ABORTRETRYIGNORE | MB_ICONEXCLAMATION | MB_SETFOREGROUND);
		switch (iRetValue1)
		{
		case IDABORT:
			lpszResponce = TEXT("������ ������ �������� (ABORT)");
			break;
		case IDRETRY:
			lpszResponce = TEXT("������ ������ ��������� (RETRY)");
			break;
		case IDIGNORE:
			lpszResponce = TEXT("������ ������ ���������� (IGNORE)");
			break;
		default: lpszResponce = TEXT("����� ��� �� �������.");
		}
		TCHAR buf[200] = TEXT(""); 
		lstrcat(buf, lpszResponce);
		lstrcat(buf, TEXT(" ���������� �������� ������������ �������� ? "));
			iRetValue2 = MessageBox(NULL, buf, lpszMesBoxTitle,
				MB_YESNO | MB_ICONQUESTION | MB_SETFOREGROUND);
	} while (iRetValue2 != IDNO);
	///
	return 0;
}