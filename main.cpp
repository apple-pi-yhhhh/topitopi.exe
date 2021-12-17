#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpszCmdLine, int nCmdShow)
{
    int start;

    start = MessageBox(NULL, TEXT("I'm a computer virus.\nPressing [OK]will cause the virus to rampage on your computer.\nI am not responsible if your computer breaksand becomes completely unusable.\nWe strongly recommend using a virtual environment.\n\nSelect [OK] or [Cancel]"),
        TEXT("topi.π-virus"), MB_OKCANCEL | MB_ICONWARNING);

    switch (start){
        case IDOK:
            int OK;
            OK = MessageBox(NULL, TEXT("Do you really want to execute?"),
                TEXT("OK"), MB_OKCANCEL | MB_ICONWARNING);
            switch (OK) {
                case IDOK:
                    break;

                case IDCANCEL:
                    break;
            }
            break;

        case IDCANCEL:
            MessageBox(NULL, TEXT("Canceled execution"),
                TEXT("Cancel"), MB_ICONINFORMATION);
            break;
    }
    return 0;
}
