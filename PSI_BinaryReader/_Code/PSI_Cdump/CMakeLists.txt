cmake_minimum_required(VERSION 3.10)
project(Bindumpp VERSION 00.000.001.001)
add_executable(cdump cdump.c)
install(TARGETS cdump DESTINATION . )