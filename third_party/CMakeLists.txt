PROJECT(third_party)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6) 

AUX_SOURCE_DIRECTORY(. DIR_SRC)
AUX_SOURCE_DIRECTORY(./json json_DIR_SRC)

SET(header_files
    ./json/json_protocol.h
)

SET(SRC_LIST 
    ${DIR_SRC}
)

ADD_SUBDIRECTORY(./json/jsoncpp ${Fossilizid_bin_path}/jsoncpp)