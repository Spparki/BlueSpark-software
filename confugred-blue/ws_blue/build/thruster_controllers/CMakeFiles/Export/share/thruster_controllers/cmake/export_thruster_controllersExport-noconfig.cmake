#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "thruster_controllers::thruster_controllers" for configuration ""
set_property(TARGET thruster_controllers::thruster_controllers APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(thruster_controllers::thruster_controllers PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libthruster_controllers.so"
  IMPORTED_SONAME_NOCONFIG "libthruster_controllers.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS thruster_controllers::thruster_controllers )
list(APPEND _IMPORT_CHECK_FILES_FOR_thruster_controllers::thruster_controllers "${_IMPORT_PREFIX}/lib/libthruster_controllers.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
