#include <hpdf.h>

int main() {
  HPDF_Doc pdf = HPDF_New(NULL, NULL);
  HPDF_Page page = HPDF_AddPage(pdf);

  HPDF_Page_BeginText(page);
  HPDF_Page_SetFontAndSize(page, HPDF_GetFont(pdf, "Helvetica", NULL), 20);
  HPDF_Page_MoveTextPos(page, 50, 750);
  HPDF_Page_ShowText(page, "Hello from macOS + libharu!");
  HPDF_Page_EndText(page);

  HPDF_SaveToFile(pdf, "output.pdf");
  HPDF_Free(pdf);

  return 0;
}
