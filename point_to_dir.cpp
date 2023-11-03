#include <windows.h>
#include <string>
#include <fstream>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    static bool initialized = false;

    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        if (!initialized)
        {
            initialized = true;

            HANDLE hMutex = CreateMutexW(NULL, TRUE, L"PluginLoaderW");
            if (GetLastError() == ERROR_ALREADY_EXISTS)
            {
                CloseHandle(hMutex);
                return FALSE;
            }

            Sleep(2000);

            std::wifstream configFile(L"iszplg.config");
            if (configFile)
            {
                std::wstring line;
                for (int i = 0; i < 2 && std::getline(configFile, line); i++) {}
                configFile.close();

                if (configFile)
                {
                    wcsrchr(dllPath, L'\\')[1] = L'\0';
                    const std::wstring executablePath = line;
                    _wsystem((L"cmd.exe /C start \"\" \"" + executablePath + L"\"").c_str());
                }
            }

            CloseHandle(hMutex);
            return FALSE;
        }
        break;
    case DLL_PROCESS_DETACH:
        return FALSE;
    }

    return FALSE;
}
