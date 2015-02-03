PROJECT(test_vchat_server)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6) 

AUX_SOURCE_DIRECTORY(. DIR_SRC)

SET(header_files
)

SET(SRC_LIST 
    ${DIR_SRC}
)

add_executable(test_vchat_server ${SRC_LIST} ${header_files})
target_link_libraries(test_vchat_server vchat)