import QtQuick 2.6
import QtQuick.Controls 1.5

Rectangle {
    id: rectangle1

    width: 360
    height: 360

    property alias button1: button1
    property alias text1: text1

    Button {
        id: button1
        text: qsTr("Show Dialog")
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
    }

    Text {
        id: text1
        x: 138
        y: 148
        width: 84
        height: 14
        text: qsTr("Testing Dialog")
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: button1.top
        anchors.bottomMargin: 20
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 12
        color: "red"
    }
}
