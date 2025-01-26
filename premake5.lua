-- 定义项目名称和版本
workspace "SweetNote"
    configurations { "Debug", "Release" }
    platforms { "x64" }
    language "C++"

-- 设置项目的默认配置
project "SweetNote"
    kind "ConsoleApp"
    language "C++"
    location "build"

    -- 文件夹结构
    files {
        "src/**/*.h",  -- 包含所有头文件
        "src/**/*.cpp" -- 包含所有源文件
    }

    -- 设置包含目录（include directories）
    includedirs {
        "src"          -- 根目录
    }

    -- 设置链接目录（linker directories），如果有库需要链接，可以设置此项
    libdirs {}

    -- 设置预处理宏
    defines {
        DEBUG
    }

    -- 配置 Debug 和 Release 模式
    filter "configurations:Debug"
        symbols "On"  -- 启用符号调试

    filter "configurations:Release"
        optimize "On"  -- 启用优化

    -- 设置目标平台为 x64
    filter "platforms:x64"
        architecture "x86_64"

    -- 生成 Visual Studio 解决方案和项目文件
    filter "action:vs*"
        defines { "WIN32" }
        system "Windows"
        platforms { "x64" }
