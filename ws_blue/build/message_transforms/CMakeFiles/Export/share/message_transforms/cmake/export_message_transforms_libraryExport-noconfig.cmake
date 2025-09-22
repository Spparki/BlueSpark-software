#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "message_transforms::message_transforms_library" for configuration ""
set_property(TARGET message_transforms::message_transforms_library APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(message_transforms::message_transforms_library PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmessage_transforms_library.so"
  IMPORTED_SONAME_NOCONFIG "libmessage_transforms_library.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS message_transforms::message_transforms_library )
list(APPEND _IMPORT_CHECK_FILES_FOR_message_transforms::message_transforms_library "${_IMPORT_PREFIX}/lib/libmessage_transforms_library.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
