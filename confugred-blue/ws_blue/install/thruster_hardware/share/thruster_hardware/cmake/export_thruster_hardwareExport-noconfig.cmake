#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "thruster_hardware::thruster_hardware" for configuration ""
set_property(TARGET thruster_hardware::thruster_hardware APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(thruster_hardware::thruster_hardware PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libthruster_hardware.so"
  IMPORTED_SONAME_NOCONFIG "libthruster_hardware.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS thruster_hardware::thruster_hardware )
list(APPEND _IMPORT_CHECK_FILES_FOR_thruster_hardware::thruster_hardware "${_IMPORT_PREFIX}/lib/libthruster_hardware.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
