#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

//using namespace std;


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpszCmdLine, int nCmdShow)
{
    int start;

    start = MessageBox(NULL, TEXT("I'm a computer virus.\nPressing [OK]will cause the virus to rampage on your computer.\nI am not responsible if your computer breaksand becomes completely unusable.\nWe strongly recommend using a virtual environment.\n\nSelect [OK] or [Cancel]"),
        TEXT("topitopi"), MB_OKCANCEL | MB_ICONWARNING);

    switch (start){
        case IDOK:
            int OK;
            OK = MessageBox(NULL, TEXT("Do you really want to execute?"),
                TEXT("OK"), MB_OKCANCEL | MB_ICONWARNING);
            switch (OK) {
                case IDOK:

                    // # # # # #     本文を書くのじゃ！！     # # # # # #


                    //system("mkdir C:\\Users\\wwwto\\test");
                    //system("bitsadmin /transfer download https://raw.githubusercontent.com/apple-pi-yhhhh/topitopi.exe/main/test/images/hello.png C:\\Users\\wwwto\\test\\test.png");
                    //system("cd C:\\Users\\wwwto\\Downloads & call powershell -command \"Expand - test.zip C:\\Users\\wwwto\\test\"");
                    //system("call powershell");


                    // # # # # #     本文を書くのじゃ！！     # # # # # #
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
