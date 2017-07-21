/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_client_socket_t {
    QByteArrayData data[11];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_client_socket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_client_socket_t qt_meta_stringdata_client_socket = {
    {
QT_MOC_LITERAL(0, 0, 13), // "client_socket"
QT_MOC_LITERAL(1, 14, 18), // "send_file_toclient"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "my_disconnected"
QT_MOC_LITERAL(4, 50, 7), // "recvmsg"
QT_MOC_LITERAL(5, 58, 3), // "meg"
QT_MOC_LITERAL(6, 62, 9), // "recv_file"
QT_MOC_LITERAL(7, 72, 13), // "startTransfer"
QT_MOC_LITERAL(8, 86, 9), // "send_file"
QT_MOC_LITERAL(9, 96, 8), // "numBytes"
QT_MOC_LITERAL(10, 105, 14) // "disconnectslot"

    },
    "client_socket\0send_file_toclient\0\0"
    "my_disconnected\0recvmsg\0meg\0recv_file\0"
    "startTransfer\0send_file\0numBytes\0"
    "disconnectslot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_client_socket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       4,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   56,    2, 0x08 /* Private */,
       7,    0,   57,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void,

       0        // eod
};

void client_socket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        client_socket *_t = static_cast<client_socket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_file_toclient(); break;
        case 1: _t->my_disconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->recvmsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->recv_file(); break;
        case 4: _t->startTransfer(); break;
        case 5: _t->send_file((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->disconnectslot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (client_socket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&client_socket::send_file_toclient)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (client_socket::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&client_socket::my_disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (client_socket::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&client_socket::recvmsg)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject client_socket::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_client_socket.data,
      qt_meta_data_client_socket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *client_socket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *client_socket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_client_socket.stringdata0))
        return static_cast<void*>(const_cast< client_socket*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int client_socket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void client_socket::send_file_toclient()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void client_socket::my_disconnected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void client_socket::recvmsg(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_tcpserver_t {
    QByteArrayData data[12];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tcpserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tcpserver_t qt_meta_stringdata_tcpserver = {
    {
QT_MOC_LITERAL(0, 0, 9), // "tcpserver"
QT_MOC_LITERAL(1, 10, 15), // "sendfile_signal"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "error"
QT_MOC_LITERAL(4, 33, 23), // "QTcpSocket::SocketError"
QT_MOC_LITERAL(5, 57, 11), // "socketError"
QT_MOC_LITERAL(6, 69, 17), // "show_error_string"
QT_MOC_LITERAL(7, 87, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(8, 116, 14), // "recv_file_slot"
QT_MOC_LITERAL(9, 131, 3), // "msg"
QT_MOC_LITERAL(10, 135, 20), // "delete_client_socket"
QT_MOC_LITERAL(11, 156, 10) // "descriptor"

    },
    "tcpserver\0sendfile_signal\0\0error\0"
    "QTcpSocket::SocketError\0socketError\0"
    "show_error_string\0QAbstractSocket::SocketError\0"
    "recv_file_slot\0msg\0delete_client_socket\0"
    "descriptor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tcpserver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   43,    2, 0x0a /* Public */,
       8,    1,   46,    2, 0x0a /* Public */,
      10,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void tcpserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tcpserver *_t = static_cast<tcpserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendfile_signal(); break;
        case 1: _t->error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 2: _t->show_error_string((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->recv_file_slot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->delete_client_socket((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (tcpserver::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tcpserver::sendfile_signal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (tcpserver::*_t)(QTcpSocket::SocketError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tcpserver::error)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject tcpserver::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_tcpserver.data,
      qt_meta_data_tcpserver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tcpserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tcpserver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tcpserver.stringdata0))
        return static_cast<void*>(const_cast< tcpserver*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int tcpserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void tcpserver::sendfile_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void tcpserver::error(QTcpSocket::SocketError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 16), // "test_send_string"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "send_to_clientFile"
QT_MOC_LITERAL(4, 44, 12) // "close_socket"

    },
    "Widget\0test_send_string\0\0send_to_clientFile\0"
    "close_socket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->test_send_string(); break;
        case 1: _t->send_to_clientFile(); break;
        case 2: _t->close_socket(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
