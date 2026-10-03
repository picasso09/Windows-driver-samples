#pragma once

#include <windows.h>
#include <winioctl.h>
#include <guiddef.h>

// GUID device interface supaya service user-mode bisa membuka driver.
// Ganti dengan GUID buatanmu sendiri kalau mau (Visual Studio: Tools > Create GUID).
static const GUID GUID_DEVINTERFACE_IDD_BRIGHTNESS =
    { 0x7b4a6c1e, 0x3f52, 0x4d8a, { 0x9e, 0x21, 0x5c, 0x0d, 0x8f, 0x3a, 0x6b, 0x47 } };

// Output: DWORD = berapa kali SetGammaRamp dipanggil OS sejak driver aktif
#define IOCTL_IDD_GET_GAMMA_CALLS CTL_CODE(FILE_DEVICE_UNKNOWN, 0x800, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SET_BRIGHTNESS_LEVEL CTL_CODE(FILE_DEVICE_UNKNOWN, 0x802, METHOD_BUFFERED, FILE_ANY_ACCESS)