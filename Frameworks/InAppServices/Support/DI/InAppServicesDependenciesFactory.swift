#if MIXBOX_ENABLE_IN_APP_SERVICES

import MixboxIpc
import MixboxIpcCommon
import MixboxFoundation
import MixboxUiKit

public protocol InAppServicesDependenciesFactory: class {
    var iosVersionProvider: IosVersionProvider { get }
    var ipcStarter: IpcStarter { get }
    var accessibilityEnhancer: AccessibilityEnhancer { get }
    var assertingSwizzler: AssertingSwizzler { get }
    var keyboardEventInjector: KeyboardEventInjector { get }
    var scrollViewIdlingResourceSwizzler: ScrollViewIdlingResourceSwizzler { get }
    
    func mixboxUrlProtocolBootstrapper(
        ipcRouter: IpcRouter,
        ipcClient: IpcClient)
        -> MixboxUrlProtocolBootstrapper?
}

#endif
