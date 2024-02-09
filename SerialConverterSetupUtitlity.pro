QT += core widgets printsupport serialport

SOURCES +=\
	SerialConverterSetupUtitlity.cpp \
	main.cpp \
	receivesendpannel.cpp \
	sendpannel.cpp
	
	
HEADERS +=\
	SerialConverterSetupUtitlity.h \
	receivesendpannel.h \
	sendpannel.h

FORMS += \
    SerialConverterSetupUtitlity.ui \
    receivesendpannel.ui \
    sendpannel.ui