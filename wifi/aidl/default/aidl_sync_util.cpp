/*
 * Copyright (C) 2022 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "aidl_sync_util.h"

namespace {
std::recursive_mutex g_mutex;
}  // namespace

namespace aidl {
namespace android {
namespace hardware {
namespace wifi {
namespace aidl_sync_util {

std::unique_lock<std::recursive_mutex> acquireGlobalLock() {
    return std::unique_lock<std::recursive_mutex>{g_mutex};
}

}  // namespace aidl_sync_util
}  // namespace wifi
}  // namespace hardware
}  // namespace android
}  // namespace aidl
