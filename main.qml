import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr('Icon Font Demo')

    Row {
        anchors.centerIn: parent
        height: Math.max(demoIcon.height, demoLabel.height)
        spacing: 16

        Icon {
            id: demoIcon
            iconPath: 'check-circle'
            size: 32
            color: 'green'
            anchors.verticalCenter: parent.verticalCenter
        }

        Text {
            id: demoLabel
            font.pixelSize: 32
            text: qsTr('This looks awesome!')
            anchors.verticalCenter: parent.verticalCenter
        }
    }
}
