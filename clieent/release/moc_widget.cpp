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
struct qt_meta_stringdata_my_thread_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_my_thread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_my_thread_t qt_meta_stringdata_my_thread = {
    {
QT_MOC_LITERAL(0, 0, 9), // "my_thread"
QT_MOC_LITERAL(1, 10, 18), // "send_package_finsh"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "my_thread\0send_package_finsh\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_my_thread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void my_thread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        my_thread *_t = static_cast<my_thread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_package_finsh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (my_thread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&my_thread::send_package_finsh)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject my_thread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_my_thread.data,
      qt_meta_data_my_thread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *my_thread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *my_thread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_my_thread.stringdata0))
        return static_cast<void*>(const_cast< my_thread*>(this));
    return QThread::qt_metacast(_clname);
}

int my_thread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void my_thread::send_package_finsh()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_client_t {
    QByteArrayData data[24];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_client_t qt_meta_stringdata_client = {
    {
QT_MOC_LITERAL(0, 0, 6), // "client"
QT_MOC_LITERAL(1, 7, 17), // "send_file_package"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "process_msg"
QT_MOC_LITERAL(4, 38, 8), // "allbytes"
QT_MOC_LITERAL(5, 47, 11), // "sendedbytes"
QT_MOC_LITERAL(6, 59, 11), // "scket_state"
QT_MOC_LITERAL(7, 71, 5), // "state"
QT_MOC_LITERAL(8, 77, 11), // "my_connecte"
QT_MOC_LITERAL(9, 89, 10), // "finsh_send"
QT_MOC_LITERAL(10, 100, 16), // "signal_con_state"
QT_MOC_LITERAL(11, 117, 8), // "QString&"
QT_MOC_LITERAL(12, 126, 16), // "show_recv_string"
QT_MOC_LITERAL(13, 143, 11), // "QByteArray&"
QT_MOC_LITERAL(14, 155, 5), // "bytes"
QT_MOC_LITERAL(15, 161, 12), // "displayerror"
QT_MOC_LITERAL(16, 174, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(17, 203, 15), // "slot_conneceted"
QT_MOC_LITERAL(18, 219, 16), // "test_recv_string"
QT_MOC_LITERAL(19, 236, 31), // "create_thread_send_file_package"
QT_MOC_LITERAL(20, 268, 16), // "sendToserverFile"
QT_MOC_LITERAL(21, 285, 6), // "handle"
QT_MOC_LITERAL(22, 292, 14), // "send_file_head"
QT_MOC_LITERAL(23, 307, 22) // "slot_show_disconnected"

    },
    "client\0send_file_package\0\0process_msg\0"
    "allbytes\0sendedbytes\0scket_state\0state\0"
    "my_connecte\0finsh_send\0signal_con_state\0"
    "QString&\0show_recv_string\0QByteArray&\0"
    "bytes\0displayerror\0QAbstractSocket::SocketError\0"
    "slot_conneceted\0test_recv_string\0"
    "create_thread_send_file_package\0"
    "sendToserverFile\0handle\0send_file_head\0"
    "slot_show_disconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_client[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    2,   85,    2, 0x06 /* Public */,
       6,    1,   90,    2, 0x06 /* Public */,
       8,    0,   93,    2, 0x06 /* Public */,
       9,    0,   94,    2, 0x06 /* Public */,
      10,    1,   95,    2, 0x06 /* Public */,
      12,    1,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  101,    2, 0x0a /* Public */,
      17,    0,  104,    2, 0x0a /* Public */,
      18,    0,  105,    2, 0x0a /* Public */,
      19,    0,  106,    2, 0x0a /* Public */,
      20,    1,  107,    2, 0x0a /* Public */,
      22,    0,  110,    2, 0x0a /* Public */,
      23,    0,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        client *_t = static_cast<client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_file_package(); break;
        case 1: _t->process_msg((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->scket_state((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->my_connecte(); break;
        case 4: _t->finsh_send(); break;
        case 5: _t->signal_con_state((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->show_recv_string((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->displayerror((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 8: _t->slot_conneceted(); break;
        case 9: _t->test_recv_string(); break;
        case 10: _t->create_thread_send_file_package(); break;
        case 11: _t->sendToserverFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->send_file_head(); break;
        case 13: _t->slot_show_disconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
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
            typedef void (client::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&client::send_file_package)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (client::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&client::process_msg)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (client::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&client::scket_state)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (client::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&client::my_connecte)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (client::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&client::finsh_send)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (client::*_t)(QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&client::signal_con_state)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (client::*_t)(QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&client::show_recv_string)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject client::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_client.data,
      qt_meta_data_client,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *client::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_client.stringdata0))
        return static_cast<void*>(const_cast< client*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void client::send_file_package()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void client::process_msg(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void client::scket_state(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void client::my_connecte()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void client::finsh_send()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void client::signal_con_state(QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void client::show_recv_string(QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[17];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 16), // "reset_processbar"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "chose_file"
QT_MOC_LITERAL(4, 36, 9), // "send_file"
QT_MOC_LITERAL(5, 46, 17), // "show_socket_state"
QT_MOC_LITERAL(6, 64, 5), // "state"
QT_MOC_LITERAL(7, 70, 12), // "show_process"
QT_MOC_LITERAL(8, 83, 8), // "allbytes"
QT_MOC_LITERAL(9, 92, 12), // "surplusbytes"
QT_MOC_LITERAL(10, 105, 15), // "show_test_sting"
QT_MOC_LITERAL(11, 121, 11), // "QByteArray&"
QT_MOC_LITERAL(12, 133, 10), // "show_bytes"
QT_MOC_LITERAL(13, 144, 16), // "slot_conn_server"
QT_MOC_LITERAL(14, 161, 14), // "show_con_state"
QT_MOC_LITERAL(15, 176, 8), // "QString&"
QT_MOC_LITERAL(16, 185, 19) // "creeate_thread_send"

    },
    "Widget\0reset_processbar\0\0chose_file\0"
    "send_file\0show_socket_state\0state\0"
    "show_process\0allbytes\0surplusbytes\0"
    "show_test_sting\0QByteArray&\0show_bytes\0"
    "slot_conn_server\0show_con_state\0"
    "QString&\0creeate_thread_send"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       7,    2,   65,    2, 0x08 /* Private */,
      10,    1,   70,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,
      14,    1,   74,    2, 0x08 /* Private */,
      16,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    6,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reset_processbar(); break;
        case 1: _t->chose_file(); break;
        case 2: _t->send_file(); break;
        case 3: _t->show_socket_state((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->show_process((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->show_test_sting((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->slot_conn_server(); break;
        case 7: _t->show_con_state((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->creeate_thread_send(); break;
        default: ;
        }
    }
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
