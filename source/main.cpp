#include <switch.h>

#include "menu.h"
#include <stdio.h>
#include <filesystem>

using namespace std;

int main(int argc, char **argv)
{
    //Initialize console. Using NULL as the second argument tells the console library to use the internal console structure as current one.
    //this is C++ we should use nullptr instead
    consoleInit(nullptr);

    //SimpleIniParser May or may not need the file to exist so we will create it anyways
    if (!filesystem::exists(configFile))
        fclose(fopen(configFile.c_str(), "w"));
    menuMainLoop();

    consoleExit(nullptr);
    return 0;
}
