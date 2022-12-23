#include "Header.h"
#include "User.h"

int main()
{
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_SHOWMAXIMIZED);
    srand(time(NULL));
    User user;
    user.mainProgram();
    return 0;
}

