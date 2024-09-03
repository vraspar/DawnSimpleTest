#include <jni.h>
#include "dawn/webgpu_cpp.h"
#include "dump_utils.h"

extern "C"
JNIEXPORT void JNICALL
Java_com_example_dawnsimpletest_MainActivity_initDawn(JNIEnv* env, jobject /* this */) {
    auto instance = wgpu::CreateInstance();

    // Get Adapter
    wgpu::Adapter adapter;
    instance.RequestAdapter(
            nullptr,
            [](WGPURequestAdapterStatus, WGPUAdapter adapterIn, const char*, void* userdata) {
                *static_cast<wgpu::Adapter*>(userdata) = wgpu::Adapter::Acquire(adapterIn);
            },
            &adapter);

    dusk::dump_utils::DumpAdapter(adapter);

    // Get device
    auto device = adapter.CreateDevice();
    dusk::dump_utils::DumpDevice(device);
}

