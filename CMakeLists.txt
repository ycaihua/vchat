PROJECT(vchat)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8) 

ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
ADD_DEFINITIONS(-D_WINSOCK_DEPRECATED_NO_WARNINGS)

set(portaudio_INCLUDE_PATH ${PROJECT_SOURCE_DIR}//third_party//portaudio//portaudio//include CACHE PATH "vchat include path")
INCLUDE_DIRECTORIES(${portaudio_INCLUDE_PATH})

set(portaudio_LIBS_PATH ${PROJECT_SOURCE_DIR}//third_party//portaudio//portaudio//lib CACHE PATH "vchat link path")
link_directories(${portaudio_LIBS_PATH})

set(speex_INCLUDE_PATH ${PROJECT_SOURCE_DIR}//third_party//speex//speex//include CACHE PATH "vchat include path")
INCLUDE_DIRECTORIES(${speex_INCLUDE_PATH})

set(speex_LIBS_PATH ${PROJECT_SOURCE_DIR}//third_party//speex//speex//lib CACHE PATH "vchat link path")
link_directories(${speex_LIBS_PATH})

set(BOOST_INCLUDE_PATH ${PROJECT_SOURCE_DIR}//third_party//boost CACHE PATH "vchat include path")
INCLUDE_DIRECTORIES(${BOOST_INCLUDE_PATH})

set(BOOST_LIBS_PATH ${PROJECT_SOURCE_DIR}//third_party//boost//libs CACHE PATH "vchat link path")
link_directories(${BOOST_LIBS_PATH})

set(JSON_INCLUDE_PATH ${PROJECT_SOURCE_DIR}//third_party//json//jsoncpp//include CACHE PATH "vchat include path")
INCLUDE_DIRECTORIES(${JSON_INCLUDE_PATH})

set(vchat_bin_path ${PROJECT_BINARY_DIR}/bin CACHE PATH "vchat bin path")

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

ADD_SUBDIRECTORY(vchat ${vchat_bin_path}/vchat)
ADD_SUBDIRECTORY(test_vchat/client ${vchat_bin_path}/test_vchat/client)
ADD_SUBDIRECTORY(test_vchat/server ${vchat_bin_path}/test_vchat/server)