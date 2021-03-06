public final class UiEventHistoryRecord: Codable  {
    public let event: UiEvent
    public let date: Date
    
    public init(
        event: UiEvent,
        date: Date)
    {
        self.event = event
        self.date = date
    }
}
