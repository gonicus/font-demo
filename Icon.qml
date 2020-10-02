import QtQuick 2.15
import Demo 1.0 as IconFont

/// Loads and displays an icon of the icon font by giving the path to the icon svg file
Text {
    id: control
    width: control.size
    height: control.size
    verticalAlignment: Text.AlignVCenter
    horizontalAlignment: Text.AlignHCenter

    /// Path to the icon svg file that should be loaded; empty string (default) unloads the icon
    property string iconPath

    /// Size of the icon in pixels (default: 32)
    property int size: 32

    /// Color of the icon (default: black)
    property alias color: icon.color

    IconFont.IconFontResolver {
        id: resolver
    }

    Text {
        id: icon
        text: String.fromCharCode(resolver.indexOfPath(control.iconPath))
        font.family: "IconFont"
        font.pixelSize: control.size
    }
}
