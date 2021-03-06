import Foundation
import MixboxIpc
import MixboxIpcCommon

public final class UrlOpenerImpl: UrlOpener {
    private let ipcClient: IpcClient
    
    public init(ipcClient: IpcClient) {
        self.ipcClient = ipcClient
    }
    
    public func open(url: URL) throws {
        let result = try ipcClient.callOrThrow(
            method: OpenUrlIpcMethod(),
            arguments: OpenUrlIpcMethod.Arguments(
                url: url
            )
        )
        
        try result.getVoidReturnValue()
    }
}
