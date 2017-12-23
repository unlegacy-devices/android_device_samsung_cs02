/*
 * Copyright (C) 2015 Pawit Pornkitprasan
 * Copyright (C) 2017 Tim Schumacher
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

#include <stdlib.h>
#include <gui/SensorManager.h>
#include <media/stagefright/MediaBufferGroup.h>
#include <media/stagefright/MediaBuffer.h>
#include <utils/Errors.h>

namespace android {
    extern "C" {
        void *CRYPTO_malloc(int num, const char *file, int line) {
            return malloc(num);
        }

        SensorManager* _ZN7android9SingletonINS_13SensorManagerEE9sInstanceE = NULL;

        Mutex _ZN7android9SingletonINS_13SensorManagerEE5sLockE(Mutex::PRIVATE);

        void* _ZN7android13SensorManagerC1ERKNS_8String16E(void* obj, const String16& opPackageName);
        void* _ZN7android13SensorManagerC1Ev(void* obj) {
            return _ZN7android13SensorManagerC1ERKNS_8String16E(obj, String16());
        }

        void* _ZN7android13SensorManager16createEventQueueENS_7String8Ei(void* obj, String8 packageName, int mode);
        void* _ZN7android13SensorManager16createEventQueueEv(void* obj) {
            return _ZN7android13SensorManager16createEventQueueENS_7String8Ei(obj, String8(""), 0);
        }

        status_t _ZN7android16MediaBufferGroup14acquire_bufferEPPNS_11MediaBufferE(
            MediaBufferGroup* group, MediaBuffer **out) {
            return group->acquire_buffer(out, false);
        }

        /*
        void _ZN7android10VectorImpl19reservedVectorImpl1Ev() {}
        void _ZN7android10VectorImpl19reservedVectorImpl2Ev() {}
        void _ZN7android10VectorImpl19reservedVectorImpl3Ev() {}
        void _ZN7android10VectorImpl19reservedVectorImpl4Ev() {}
        void _ZN7android10VectorImpl19reservedVectorImpl5Ev() {}
        void _ZN7android10VectorImpl19reservedVectorImpl6Ev() {}
        void _ZN7android10VectorImpl19reservedVectorImpl7Ev() {}
        void _ZN7android10VectorImpl19reservedVectorImpl8Ev() {}

        void _ZN7android16SortedVectorImpl25reservedSortedVectorImpl1Ev() {}
        void _ZN7android16SortedVectorImpl25reservedSortedVectorImpl2Ev() {}
        void _ZN7android16SortedVectorImpl25reservedSortedVectorImpl3Ev() {}
        void _ZN7android16SortedVectorImpl25reservedSortedVectorImpl4Ev() {}
        void _ZN7android16SortedVectorImpl25reservedSortedVectorImpl5Ev() {}
        void _ZN7android16SortedVectorImpl25reservedSortedVectorImpl6Ev() {}
        void _ZN7android16SortedVectorImpl25reservedSortedVectorImpl7Ev() {}
        void _ZN7android16SortedVectorImpl25reservedSortedVectorImpl8Ev() {}
        */

        status_t _ZN7android6Parcel13writeString16EPKDsj(void *parcel, const char16_t* str, size_t len);
        status_t _ZN7android6Parcel13writeString16EPKtj(void *parcel, const char16_t* str, size_t len) {
            return _ZN7android6Parcel13writeString16EPKDsj(parcel, str, len);
        }
    }
}
