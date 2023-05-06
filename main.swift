import Cocoa

let graphicsWnd = GraphicsWindow(width: 400, height: 300, title: "Swift Test Window")

let customView = NSView(frame: NSMakeRect(0, 0, graphicsWnd.window.frame.width, graphicsWnd.window.frame.height))
customView.wantsLayer = true
customView.layer?.backgroundColor = NSColor.blue.cgColor

graphicsWnd.addCustomView(customView: customView)
graphicsWnd.addQuitButton()

let app = NSApplication.shared
app.run()
