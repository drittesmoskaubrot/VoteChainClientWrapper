#-------------------------------------------------
#
# Project created by QtCreator 2016-11-30T14:28:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VoteChain_Polllstation
TEMPLATE = app


SOURCES += main.cpp\
    pollstation.cpp \
    factory/Candidate.cpp \
    factory/CandidateFactory.cpp \
    factory/ICandidateFactory.cpp \
    app/RPCConnect.cpp \
    app/Votechain_PollStation.cpp \
    parser/ElectiveChoice.cpp \
    RPC/IRPCContext.cpp \
    RPC/RPCContext.cpp \
    RPC/RPCControl.cpp \
    RPC/RPCHandler.cpp \
    TX/ITxHandler.cpp \
    TX/TxCertificate.cpp \
    TX/TxHandler.cpp \
    TX/TxMessage.cpp \
    TX/TxRaw.cpp \
    TX/TxTransitionCertificateProtocol.cpp \

HEADERS  += pollstation.h \
    factory/Candidate.h \
    factory/CandidateFactory.h \
    factory/ICandidate.h \
    factory/ICandidateFactory.h \
    app/IRPCConnect.h \
    app/IVotechain_PollStation.h \
    app/RPCConnect.h \
    app/Votechain_PollStation.h \
    parser/ElectiveChoice.h \
    parser/IElectiveChoice.h \
    RPC/IRPCContext.h \
    RPC/IRPCControl.h \
    RPC/IRPCHandler.h \
    RPC/RPCContext.h \
    RPC/RPCControl.h \
    RPC/RPCHandler.h \
    TX/ITransaction.h \
    TX/ITxHandler.h \
    TX/TxCertificate.h \
    TX/TxHandler.h \
    TX/TxMessage.h \
    TX/TxRaw.h \
    TX/TxTransitionCertificateProtocol.h

FORMS    += pollstation.ui
