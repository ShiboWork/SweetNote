/**
 * @file Application.cpp
 * @author your name (you@domain.com)
 * @brief Application class implementation - Contains the core application logic
 * @version 0.1
 * @date 2025-01-26
 * 
 * @copyright Copyright (c) 2025
 * 
 * This file implements the Application class methods that manage the application
 * lifecycle, including initialization, main loop, and shutdown.
 */

#include "SweetNote/Core/Application.h"
#include "SweetNote/Debug/Debug.h"

#include <windows.h>

namespace SweetNote {
    Application* Application::s_Instance = nullptr;

    /**
     * @brief Application constructor
     * 
     * Initializes the application instance and sets up the singleton pointer.
     * This is where any core initialization logic should be placed.
     */
    Application::Application() 
    {
        s_Instance = this;

        // TODO: Add initialization steps here
    }

    /**
     * @brief Close the application
     * 
     * Sets the running flag to false, which will cause the main loop to exit
     * on the next iteration.
     */
    void Application::Close() {
        m_Running = false;
    }

    /**
     * @brief Main application loop
     * 
     * Contains the core application logic that runs continuously while the
     * application is active. Logs startup and runs until m_Running is false.
     */
    void Application::Run() {
        debugLog("App Run.", DEBUG_TYPE::INFO);
        while(m_Running){
            // Main application loop
            Sleep(1000); // Sleep for 1 second between iterations
        }
    }
}
