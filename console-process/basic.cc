#include "webview.h"
#include <iostream>

#ifdef _WIN32
int WINAPI WinMain(HINSTANCE /*hInst*/, HINSTANCE /*hPrevInst*/,
                   LPSTR /*lpCmdLine*/, int /*nCmdShow*/) {
#else
int main() {
#endif
  std::string title;
  std::string url;

  std::getline(std::cin, title);
  std::getline(std::cin, url);

  webview::webview w(false, nullptr);
  w.set_title(title);
  w.set_size(1000, 618, WEBVIEW_HINT_NONE);
  w.navigate(url);
  w.run();
  return 0;
}
