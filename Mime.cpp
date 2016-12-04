#include <Mime.h>

int main(void) {
	BMimeType randomFile;
	randomFile.SetType("text/x-MyWrite");
	randomFile.SetShortDescription("Random");
	randomFile.SetLongDescription("Random new file type");
	
	BMessage extMsg;
	extMsg.AddString("extensions", "rdf");
	randomFile.SetFileExtensions(&extMsg);
	// Open With
	randomFile.SetPreferredApp("application/x-vnd.text.MyWrite");
}
