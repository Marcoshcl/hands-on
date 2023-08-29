#include <android/binder_manager.h>
#include <aidl/devtitans/smartunlock/ISmartunlock.h>
#include <iostream>                             // std::cout e std::endl (end-line)

using namespace aidl::devtitans::smartunlock;     // ISmartunlock
using namespace std;                            // std::shared_ptr
using namespace ndk;                            // ndk::SpAIBinder

int main() {
    shared_ptr<ISmartunlock> service;
    service = ISmartunlock::fromBinder(SpAIBinder(AServiceManager_getService("devtitans.smartunlock.ISmartunlock/default")));
    
    if (!service) {
        cout << "Erro acessando o serviço!" << endl;
        return 1;
    }

    int32_t _aidl_return;
    ScopedAStatus status = service->getLuminosity(&_aidl_return);
    int luminosity = static_cast<int32_t>(_aidl_return);
    cout << "Luminosidade: " << luminosity << endl;
    
    return 0;
}