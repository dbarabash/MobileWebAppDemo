import QtQuick 2.0

Rectangle {
    width: 320
    height: 480

    Text {
        id: text1
        x: 19
        y: 14
        width: 283
        height: 451
        text: mainModel.getData()
        verticalAlignment: Text.AlignVCenter
        font.pixelSize: 12
    }

}
