$(BUILDDIR)/console-webview-linux:
	g++ basic.cc -std=c++11 -Ilibs/webview $(shell pkg-config --cflags --libs gtk+-3.0 webkit2gtk-4.0) -o $(BUILDDIR)/console-webview-linux
$(BUILDDIR)/console-webview-macos:
	g++ basic.cc -std=c++11 -Ilibs/webview -framework WebKit -o $(BUILDDIR)/console-webview-macos

.phony: linux-binary
linux-binary: $(BUILDDIR)/console-webview-linux

.phony: macos-binary
macos-binary: $(BUILDDIR)/console-webview-macos

BUILDDIR=build
