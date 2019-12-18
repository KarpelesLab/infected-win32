#include <windows.h>

int main() {
	int res = MessageBoxA(NULL, 
		"You are seeing this message because your computer downloaded a virus. Please install an antivirus software and/or reinstall Windows.\n\nDo you want to search online for more help?", 
		"Your computer is compromised", 
		MB_YESNO | MB_ICONWARNING);

	if (res == IDYES) {
		ShellExecute(NULL, "open", "https://klb.jp/page/help-compromised-computer-windows", NULL, NULL, SW_SHOWNORMAL);
	}
	return 0;
}
