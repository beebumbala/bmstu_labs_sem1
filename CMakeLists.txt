function(auto_add_executables_by_folder)
    file(GLOB_RECURSE SOURCE_FILES "*.cpp")

    foreach(source_file ${SOURCE_FILES})
        get_filename_component(dir_name ${source_file} DIRECTORY)
        get_filename_component(dir_name ${dir_name} NAME)
        get_filename_component(file_name ${source_file} NAME_WE)

        set(target_name "${dir_name}_${file_name}")

        add_executable(${target_name} ${source_file})
        message(STATUS "Added: ${target_name} from ${source_file}")
    endforeach()
endfunction()

auto_add_executables_by_folder()