TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

INCLUDEPATH +="C:\Qt\OpenCV\install\include"
INCLUDEPATH +="C:\Qt\OpenCV\install\include\opencv2\core"
INCLUDEPATH +="C:\Qt\OpenCV\install\include\opencv2\highgui"
INCLUDEPATH +="C:\Qt\OpenCV\install\include\opencv"

LIBS+= C:/Qt/OpenCV/bin/*.dll

include(deployment.pri)
qtcAddDeployment()

