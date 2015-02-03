PROJECT(vchat)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6) 

AUX_SOURCE_DIRECTORY(. DIR_SRC)

SET(header_files
    client.h
    devices.h
    encoded.h
    paInit.h
    sound.h
    vchat.h
)

SET(SRC_LIST 
    ${DIR_SRC}
)

ADD_LIBRARY(vchat ${SRC_LIST} ${header_files})