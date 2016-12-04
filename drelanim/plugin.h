#pragma once

#include "pluginmain.h"

//plugin data
#define PLUGIN_NAME "OW Imports"
#define PLUGIN_VERSION 3

//functions
bool pluginInit(PLUG_INITSTRUCT* initStruct);
bool pluginStop();
void pluginSetup();

#define plog(format, ...) _plugin_logprintf(format, __VA_ARGS__)
