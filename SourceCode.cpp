#include <windows.h>

LRESULT CALLBACK WindowProcedure(HWND,UINT,WPARAM,LPARAM);
  // HOW ARUMENTS ARE PASSES THROUGH THE FUNCTIONS
int WINAPI WinMain(HINSTANCE hInst,HINSTANCE hPrevInst,LPSTR args, int ncmdshow) //comand line arguments
// HINSTANCE hInst
//LPSTR args
//ncmdshow how we display the window
{
MessageBox(NULL,"Hello \n This program uses the <windows.h> library \n to create a program outside the console " ,"ProgramTitle ",MB_OK);
    return 0;

}
