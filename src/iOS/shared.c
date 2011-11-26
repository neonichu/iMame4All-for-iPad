#include "shared.h"
#include <stdio.h>

/* no jailbreak - Les Bird
const char* get_resource_path(char* file)
{
  static char resource_path[1024];

  sprintf(resource_path, "/Applications/iMAME4all.app/%s", file);

  return resource_path;
}

const char* get_documents_path(char* file)
{
    static char documents_path[1024];
    sprintf(documents_path, IMAMEBASEPATH "/%s", file);

    return documents_path;
}
*/

// no jailbreak - Les Bird
extern char *get_iOS_RomPath();
extern char *get_iOS_BundlePath();

const char* get_resource_path(char* file)
{
	static char resource_path[1024];
	
	sprintf(resource_path, "%s/%s", get_iOS_BundlePath(), file);
	
	return resource_path;
}

const char* get_documents_path(char* file)
{
	static char documents_path[1024];
	
	if (strcmp(file, "roms") == 0)
	{
		sprintf(documents_path, "%s", get_iOS_RomPath());
	}
	else
	{
		sprintf(documents_path, "%s/%s", get_iOS_RomPath(), file);
	}
	
	return documents_path;
}
//