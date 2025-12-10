# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Lothlorien-Ledger_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Lothlorien-Ledger_autogen.dir\\ParseCache.txt"
  "Lothlorien-Ledger_autogen"
  )
endif()
