#pragma once

class Injector {
public:
    static bool downloadDLL();

    static void inject(const std::wstring& path);

    static DWORD launchMinecraft();
};
