#ifndef AGS_WADJETUTIL_H
#define AGS_WADJETUTIL_H

#include "plugin/agsplugin.h"

namespace agswadjetutil
{
  void AGS_EngineStartup(IAGSEngine *lpEngine);
  void AGS_EngineShutdown();
  int AGS_EngineOnEvent(int event, long data);
  int AGS_EngineDebugHook(const char *scriptName, int lineNum, int reserved);
  void AGS_EngineInitGfx(const char *driverID, void *data);
}

#endif