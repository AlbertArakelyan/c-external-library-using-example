build:
	 gcc main.c -o pdfgen  -I/opt/homebrew/opt/libharu/include -L/opt/homebrew/opt/libharu/lib -lhpdf


# build-windows: gcc main.c -I"C:/vcpkg/installed/x64-windows/include" -L"C:/vcpkg/installed/x64-windows/lib" -lharu -o pdfgen.exe

