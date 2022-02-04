QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


win32: LIBS += -L$$PWD/matlab_libs/ -ladd_matlab

INCLUDEPATH += $$PWD/matlab_libs
DEPENDPATH += $$PWD/matlab_libs


# MATLAB 用到的.lib库文件 及其搜索路径
win32: LIBS += -LD:/Matlab/extern\lib/win64/microsoft/ -llibmx
win32: LIBS += -LD:/Matlab/extern\lib/win64/microsoft/ -llibmat
win32: LIBS += -LD:/Matlab/extern\lib/win64/microsoft/ -llibeng
win32: LIBS += -LD:/Matlab/extern\lib/win64/microsoft/ -lmclmcr
win32: LIBS += -LD:/Matlab/extern\lib/win64/microsoft/ -lmclmcrrt
win32: LIBS += -LD:/Matlab/extern\lib/win64/microsoft/ -llibmex

INCLUDEPATH += D:/Matlab/extern\lib/win64/microsoft
DEPENDPATH += D:/Matlab/extern\lib/win64/microsoft

# .h文件搜索路径
INCLUDEPATH += D:/Matlab/extern/include
INCLUDEPATH += D:/Matlab/extern/include/win64


