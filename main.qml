import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    id: mainWindow

    signal signalAccepted()

    Logindlg {
        id: logindlg
        width: 200
        height: 150

        onAccepted: mainWindow.signalAccepted()
    }

    MainForm {
        button1.onClicked: {
            methodOneCPP.test();
            console.log("Hello");
            text1.color = "blue";
            logindlg.visible = true;
        }
    }

}
