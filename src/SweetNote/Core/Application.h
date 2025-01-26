/**
 * @file Application.h
 * @author your name (you@domain.com)
 * @brief Application class header - Defines the core application class for SweetNote
 * @version 0.1
 * @date 2025-01-26
 * 
 * @copyright Copyright (c) 2025
 * 
 * This file contains the Application class declaration which serves as the core
 * of the SweetNote application. It manages the application lifecycle and provides
 * access to the singleton instance.
 */

#pragma once

int main(int argc, char** argv);

namespace SweetNote {

    /**
     * @class Application
     * @brief Core application class managing the application lifecycle
     *
     * The Application class is a singleton that controls the main application loop
     * and provides access to core application functionality.
     */
    class Application
    {
    public:
        /**
         * @brief Construct a new Application object
         */
        Application();

        /**
         * @brief Close the application
         * 
         * Sets the running flag to false, causing the main loop to exit
         */
        void Close();

        /**
         * @brief Get the singleton instance of the Application
         * @return Application& Reference to the application instance
         */
        static Application& Get() { return *s_Instance; }

    private:
        /**
         * @brief Main application loop
         * 
         * Contains the core application logic and runs until m_Running is false
         */
        void Run();

    private:
        bool m_Running = true; ///< Flag indicating if the application should continue running

    private:
        static Application* s_Instance; ///< Singleton instance pointer
        friend int ::main(int argc, char** argv); ///< Allow main function to access private members
    };
}
