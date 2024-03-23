add_library(rana STATIC rana.cpp)

find_package(Boost REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})

target_link_libraries(rana PUBLIC ${Boost_LIBRARIES})