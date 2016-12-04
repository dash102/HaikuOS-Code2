#include <deque> // #include <list>
#include <Directory.h>
#include <Entry.h>
#include <FindDirectory.h>
#include <Path.h>
#include <stdio.h>

using std::deque; // using std::list;

int main(void) {
	BPath path;
	find_directory(B_USER_DIRECTORY, &path);
	BDirectory dir(path.Path());
	
	deque<entry_ref> refDeque; // list<entry_ref> refList;
	
	entry_ref ref;
	while(dir.GetNextRef(&ref) == B_OK)
		refDeque.push_back(ref); // refList.push_back(ref);
	printf("Contents of the home folder: %s\n", path.Path());
	for(deque<entry_ref>::iterator i = refDeque.begin(); 
	// for(list<entry_ref>::iterator i = refList.begin();
		i != refDeque.end(); i++) { // i != refList.end();
		printf("\t%s\n", i->name);	
	}
}
