function(auto_add_executable)
    file(GLOB_RECURSE SOURCE_FILES "*.cpp")

    foreach(source_file ${SOURCE_FILES})
        file(READ ${source_file} FILE_CONTENTS)
        if(FILE_CONTENTS MATCHES "int main[[:space:]]*[[:(]]")
            get_filename_component(target_name ${source_file} NAME_WE)
            add_executable(${target_name} ${source_file})
            message(STATUS "Auto-added target: ${target_name}")
        endif()
    endforeach()
endfunction()

auto_add_executable()