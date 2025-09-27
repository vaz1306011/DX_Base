#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
  ChangeWindowMode(TRUE);

  if (DxLib_Init() == -1)
  {
    return -1;
  }

  DrawBox(200, 200, 400, 400, GetColor(255, 255, 255), FALSE);

  WaitKey();

  DxLib_End();

  return 0;
}
