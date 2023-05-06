import Cocoa

class GraphicsWindow {
    var window: NSWindow!

    init(width: CGFloat, height: CGFloat, title: String) {
        window = NSWindow(contentRect:NSMakeRect(0,0,width,height),styleMask:[.titled, .closable, .miniaturizable, .resizable], backing:.buffered, defer:false)
        window.center()
        window.title = title
        window.makeKeyAndOrderFront(window)
    }

    func addQuitButton() {
        let quitBtn = NSButton (frame:NSMakeRect(window.frame.width - 50, 10, 40, 40))
        quitBtn.bezelStyle = .circular
        quitBtn.autoresizingMask = [.minXMargin,.maxYMargin]
        quitBtn.title = "Q"
        quitBtn.action = #selector(NSApplication.terminate)
        window.contentView!.addSubview(quitBtn)
    }

    func addCustomView(customView: NSView) {
        window.contentView!.addSubview(customView)
    }
}
