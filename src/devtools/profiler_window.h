
#include "debug_window.h"
#include "profiler.h"

class ProfilerWindow : public DebugWindow {
private:
    Profiler& _profiler;
    ImVec2 Render();
    float max_scale = 2.0f;
    bool profilerVis[PROFILER_ENTRIES] = {0};
    bool profilerSeen[PROFILER_ENTRIES] = {0};
public:
    ProfilerWindow(Profiler& profiler): _profiler(profiler) {};
};