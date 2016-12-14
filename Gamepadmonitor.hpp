#ifndef GAMEPADMONITOR_HPP
#define GAMEPADMONITOR_HPP

#include <QObject>
#include <QWidget>
#include <QGamepad>
#include <QSharedPointer>

class Gamepadmonitor : public QObject
{
    Q_OBJECT
public:
    Gamepadmonitor();

private:
    QSharedPointer<QGamepad> _gamepad;

signals:

public slots:
};

typedef QSharedPointer<Gamepadmonitor> GamepadmonitorPtr;

#endif // GAMEPADMONITOR_HPP
