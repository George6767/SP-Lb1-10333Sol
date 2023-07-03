#include <Windows.h>



int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE
	hPrevInstance,
	LPSTR lpszCmdLine, int nCmdShow)
{
	LPCTSTR lpszHelloText = TEXT("Hello World Win32 GUI Application");
		LPCTSTR lpszHelloWndTitle = TEXT("Окно сообщения");
	INT iVar = MessageBox(NULL, lpszHelloText, lpszHelloWndTitle, MB_YESNO | MB_ICONSTOP);
	///
	int iRetValue1, iRetValue2;
	LPCTSTR lpszMesBoxTitle = TEXT("Изучаем MessageBox");
	LPCTSTR lpszResponce;
	do {
		iRetValue1 = MessageBox(NULL, TEXT("Нажмите одну из кнопок."),
			lpszMesBoxTitle,
			MB_ABORTRETRYIGNORE | MB_ICONEXCLAMATION | MB_SETFOREGROUND);
		switch (iRetValue1)
		{
		case IDABORT:
			lpszResponce = TEXT("Нажата кнопка Прервать (ABORT)");
			break;
		case IDRETRY:
			lpszResponce = TEXT("Нажата кнопка Повторить (RETRY)");
			break;
		case IDIGNORE:
			lpszResponce = TEXT("Нажата кнопка Пропустить (IGNORE)");
			break;
		default: lpszResponce = TEXT("Ответ мне не понятен.");
		}
		TCHAR buf[200] = TEXT(""); 
		lstrcat(buf, lpszResponce);
		lstrcat(buf, TEXT(" Продолжить изучение возвращаемых значений ? "));
			iRetValue2 = MessageBox(NULL, buf, lpszMesBoxTitle,
				MB_YESNO | MB_ICONQUESTION | MB_SETFOREGROUND);
	} while (iRetValue2 != IDNO);
	///
	return 0;
}