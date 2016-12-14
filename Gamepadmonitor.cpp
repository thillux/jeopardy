#include "Gamepadmonitor.hpp"
#include <QCoreApplication>
#include <QKeyEvent>
#include <QApplication>
#include <QDebug>

Gamepadmonitor::Gamepadmonitor() : QObject() {
    QList<int> gamepads = QGamepadManager::instance()->connectedGamepads();
    if(!gamepads.empty()) {
        _gamepad.reset(new QGamepad(*gamepads.begin()));

        connect(_gamepad.data(), &QGamepad::buttonAChanged, this, [&](bool pressed){
            if(pressed) {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyPress, Qt::Key_A, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            } else {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyRelease, Qt::Key_A, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            }
        });
        connect(_gamepad.data(), &QGamepad::buttonBChanged, this, [&](bool pressed){
            if(pressed) {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyPress, Qt::Key_B, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            } else {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyRelease, Qt::Key_B, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            }
        });
        connect(_gamepad.data(), &QGamepad::buttonXChanged, this, [&](bool pressed){
            if(pressed) {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyPress, Qt::Key_X, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            } else {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyRelease, Qt::Key_X, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            }
        });
        connect(_gamepad.data(), &QGamepad::buttonYChanged, this, [&](bool pressed){
            if(pressed) {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyPress, Qt::Key_Y, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            } else {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyRelease, Qt::Key_Y, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            }
        });
        connect(_gamepad.data(), &QGamepad::buttonLeftChanged, this, [&](bool pressed){
            qDebug() << "Left";
            if(pressed) {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyPress, Qt::Key_Left, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            } else {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyRelease, Qt::Key_Right, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            }
        });
        connect(_gamepad.data(), &QGamepad::buttonRightChanged, this, [&](bool pressed){
            if(pressed) {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyPress, Qt::Key_Right, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            } else {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyRelease, Qt::Key_Right, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            }
        });
        connect(_gamepad.data(), &QGamepad::buttonUpChanged, this, [&](bool pressed){
            if(pressed) {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyPress, Qt::Key_Up, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            } else {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyRelease, Qt::Key_Up, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            }
        });
        connect(_gamepad.data(), &QGamepad::buttonDownChanged, this, [&](bool pressed){
            if(pressed) {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyPress, Qt::Key_Down, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            } else {
                QKeyEvent *event = new QKeyEvent ( QEvent::KeyRelease, Qt::Key_Down, Qt::NoModifier);
                QCoreApplication::postEvent (QApplication::activeWindow(), event);
            }
        });
    }
}
