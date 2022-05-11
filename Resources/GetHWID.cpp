#define _WIN32_WINNT 0x0400

#include <windows.h>
#include <stdio.h>

int main()
{
    HW_PROFILE_INFO hwProfileInfo;

    system("cls");

    if (GetCurrentHwProfile(&hwProfileInfo) != NULL) {
        printf("Hardware GUID: %s\n", hwProfileInfo.szHwProfileGuid);
        printf("Hardware Profile: %s\n", hwProfileInfo.szHwProfileName);
    }
    else {
        return 0;
    }

    getchar();

    system("cd .. && RUN_ME.exe");
}