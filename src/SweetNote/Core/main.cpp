/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief Entry point
 * @version 0.1
 * @date 2025-01-26
 * 
 * @copyright Copyright (c) 2025
 * 
*/
#include "SweetNote/Core/Application.h"
#include <memory>

/**
 * @brief Main entry point of the application
 * 
 * @param arc Number of command line arguments
 * @param argv Array of command line arguments
 * @return int Application exit code (0 for success)
 * 
 * This function creates and runs the main Application instance.
 * It serves as the entry point for the SweetNote application.
 */
int main(int arc, char** argv){

    // Create application instance
    auto app = std::make_unique<SweetNote::Application>();

    // Start main application loop
    app->Run();

    return 0;
}
