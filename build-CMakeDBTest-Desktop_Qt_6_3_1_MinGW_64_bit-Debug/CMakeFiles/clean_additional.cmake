# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeDBTest_autogen"
  "CMakeFiles\\CMakeDBTest_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CMakeDBTest_autogen.dir\\ParseCache.txt"
  )
endif()
