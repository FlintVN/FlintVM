
#error "Do not build this file. You need to create a new file based on this template file and implement the functions defined in this file."

#include "flint_system_api.h"

void FlintAPI::Thread::lock(void) {
    throw "FlintAPI::System::lock is not implemented in VM";
}

void FlintAPI::Thread::unlock(void) {
    throw "FlintAPI::System::unlock is not implemented in VM";
}

void *FlintAPI::Thread::create(void (*task)(void *), void *param, uint32_t stackSize) {
    throw "FlintAPI::Thread::create is not implemented in VM";
}

void FlintAPI::Thread::terminate(void *threadHandle) {
    throw "FlintAPI::Thread::terminate is not implemented in VM";
}

void FlintAPI::Thread::sleep(uint32_t ms) {
    throw "FlintAPI::Thread::sleep is not implemented in VM";
}

void FlintAPI::Thread::yield(void) {
    throw "FlintAPI::Thread::yield is not implemented in VM";
}