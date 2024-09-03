// Copyright 2022 The Dusk Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// https://github.com/dj2/Dusk/blob/main/src/example_01/dump_utils.h

#pragma once

#include <string>
#include "webgpu/webgpu_cpp.h"

namespace dusk::dump_utils {

std::string FeatureNameToString(wgpu::FeatureName f);
std::string AdapterTypeToString(wgpu::AdapterType type);
std::string BackendTypeToString(wgpu::BackendType type);
std::string AdapterPropertiesToString(const wgpu::AdapterProperties& props);
std::string FormatNumber(uint64_t num);

std::string LimitsToString(const wgpu::Limits& limits,
                           const std::string& indent);

void DumpAdapterProperties(wgpu::Adapter& adapter);
void DumpAdapterFeatures(wgpu::Adapter& adapter);
void DumpAdapterLimits(wgpu::Adapter& adapter);
void DumpAdapter(wgpu::Adapter& adapter);

void DumpDeviceFeatures(wgpu::Device& device);
void DumpDeviceLimits(wgpu::Device& device);
void DumpDevice(wgpu::Device& device);

}  // namespace dusk::dump_utils