
// See here: http://www.winprog.org/tutorial/start.html

#include <windows.h>

// To avoid errors in converting the char* to LPCTSTR, do this:
//   Project Settings -> General -> Character Set -> Use Multi-Byte Character Set
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
  LPSTR lpCmdLine, int nCmdShow) {
  MessageBox(NULL, "Hello, cruel world...", "Note", MB_OK);
  return 0;
}
