
#include <dawn/webgpu_cpp.h>

extern "C"
JNIEXPORT void JNICALL
Java_com_example_mydawnapp_MainActivity_initDawn(JNIEnv* env, jobject /* this */) {
    // Initialize Dawn
    dawn::native::Instance instance;
    instance.DiscoverDefaultAdapters();
    
    // You can add more logic here for initializing Dawn
}
