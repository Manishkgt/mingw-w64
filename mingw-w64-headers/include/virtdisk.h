/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_VIRTDISK
#define _INC_VIRTDISK

#if (_WIN32_WINNT >= 0x0601)
#ifdef __cplusplus
extern "C" {
#endif

typedef enum _ATTACH_VIRTUAL_DISK_FLAG {
  ATTACH_VIRTUAL_DISK_FLAG_NONE                 = 0x00000000,
  ATTACH_VIRTUAL_DISK_FLAG_READ_ONLY            = 0x00000001,
  ATTACH_VIRTUAL_DISK_FLAG_NO_DRIVE_LETTER      = 0x00000002,
  ATTACH_VIRTUAL_DISK_FLAG_PERMANENT_LIFETIME   = 0x00000004,
  ATTACH_VIRTUAL_DISK_FLAG_NO_LOCAL_HOST        = 0x00000008 
} ATTACH_VIRTUAL_DISK_FLAG;

typedef enum _ATTACH_VIRTUAL_DISK_VERSION {
  ATTACH_VIRTUAL_DISK_VERSION_UNSPECIFIED   = 0,
  ATTACH_VIRTUAL_DISK_VERSION_1             = 1 
} ATTACH_VIRTUAL_DISK_VERSION;

typedef enum _COMPACT_VIRTUAL_DISK_FLAG {
  COMPACT_VIRTUAL_DISK_FLAG_NONE   = 0x00000000 
} COMPACT_VIRTUAL_DISK_FLAG;

typedef enum _COMPACT_VIRTUAL_DISK_VERSION {
  COMPACT_VIRTUAL_DISK_VERSION_UNSPECIFIED   = 0,
  COMPACT_VIRTUAL_DISK_VERSION_1             = 1 
} COMPACT_VIRTUAL_DISK_VERSION;

typedef enum _CREATE_VIRTUAL_DISK_FLAG {
  CREATE_VIRTUAL_DISK_FLAG_NONE                       = 0x00000000,
  CREATE_VIRTUAL_DISK_FLAG_FULL_PHYSICAL_ALLOCATION   = 0x00000001 
} CREATE_VIRTUAL_DISK_FLAG;

typedef enum _CREATE_VIRTUAL_DISK_VERSION {
  CREATE_VIRTUAL_DISK_VERSION_UNSPECIFIED   = 0,
  CREATE_VIRTUAL_DISK_VERSION_1             = 1 
} CREATE_VIRTUAL_DISK_VERSION;

typedef enum _DEPENDENT_DISK_FLAG {
  DEPENDENT_DISK_FLAG_NONE                   = 0x00000000,
  DEPENDENT_DISK_FLAG_MULT_BACKING_FILES     = 0x00000001,
  DEPENDENT_DISK_FLAG_FULLY_ALLOCATED        = 0x00000002,
  DEPENDENT_DISK_FLAG_READ_ONLY              = 0x00000004,
  DEPENDENT_DISK_FLAG_REMOTE                 = 0x00000008,
  DEPENDENT_DISK_FLAG_SYSTEM_VOLUME          = 0x00000010,
  DEPENDENT_DISK_FLAG_SYSTEM_VOLUME_PARENT   = 0x00000020,
  DEPENDENT_DISK_FLAG_REMOVABLE              = 0x00000040,
  DEPENDENT_DISK_FLAG_NO_DRIVE_LETTER        = 0x00000080,
  DEPENDENT_DISK_FLAG_PARENT                 = 0x00000100,
  DEPENDENT_DISK_FLAG_NO_HOST_DISK           = 0x00000200,
  DEPENDENT_DISK_FLAG_PERMANENT_LIFETIME     = 0x00000400 
} DEPENDENT_DISK_FLAG;

typedef enum _EXPAND_VIRTUAL_DISK_VERSION {
  EXPAND_VIRTUAL_DISK_VERSION_UNSPECIFIED   = 0,
  EXPAND_VIRTUAL_DISK_VERSION_1             = 1 
} EXPAND_VIRTUAL_DISK_VERSION;

typedef enum _DETACH_VIRTUAL_DISK_FLAG {
  DETACH_VIRTUAL_DISK_FLAG_NONE   = 0x00000000 
} DETACH_VIRTUAL_DISK_FLAG;

typedef enum _EXPAND_VIRTUAL_DISK_FLAG {
  EXPAND_VIRTUAL_DISK_FLAG_NONE   = 0x00000000 
} EXPAND_VIRTUAL_DISK_FLAG;

typedef enum _GET_STORAGE_DEPENDENCY_FLAG {
  GET_STORAGE_DEPENDENCY_FLAG_NONE           = 0x00000000,
  GET_STORAGE_DEPENDENCY_FLAG_HOST_VOLUMES   = 0x00000001,
  GET_STORAGE_DEPENDENCY_FLAG_DISK_HANDLE    = 0x00000002 
} GET_STORAGE_DEPENDENCY_FLAG;

typedef enum _GET_VIRTUAL_DISK_INFO_VERSION {
  GET_VIRTUAL_DISK_INFO_UNSPECIFIED            = 0,
  GET_VIRTUAL_DISK_INFO_SIZE                   = 1,
  GET_VIRTUAL_DISK_INFO_IDENTIFIER             = 2,
  GET_VIRTUAL_DISK_INFO_PARENT_LOCATION        = 3,
  GET_VIRTUAL_DISK_INFO_PARENT_IDENTIFIER      = 4,
  GET_VIRTUAL_DISK_INFO_PARENT_TIMESTAMP       = 5,
  GET_VIRTUAL_DISK_INFO_VIRTUAL_STORAGE_TYPE   = 6,
  GET_VIRTUAL_DISK_INFO_PROVIDER_SUBTYPE       = 7 
} GET_VIRTUAL_DISK_INFO_VERSION;

typedef enum _MERGE_VIRTUAL_DISK_FLAG {
  MERGE_VIRTUAL_DISK_FLAG_NONE   = 0x00000000 
} MERGE_VIRTUAL_DISK_FLAG;

typedef enum _MERGE_VIRTUAL_DISK_VERSION {
  MERGE_VIRTUAL_DISK_VERSION_UNSPECIFIED   = 0,
  MERGE_VIRTUAL_DISK_VERSION_1             = 1 
} MERGE_VIRTUAL_DISK_VERSION;

typedef enum _OPEN_VIRTUAL_DISK_FLAG {
  OPEN_VIRTUAL_DISK_FLAG_NONE         = 0x00000000,
  OPEN_VIRTUAL_DISK_FLAG_NO_PARENTS   = 0x00000001,
  OPEN_VIRTUAL_DISK_FLAG_BLANK_FILE   = 0x00000002,
  OPEN_VIRTUAL_DISK_FLAG_BOOT_DRIVE   = 0x00000004 
} OPEN_VIRTUAL_DISK_FLAG;

typedef enum _OPEN_VIRTUAL_DISK_VERSION {
  OPEN_VIRTUAL_DISK_VERSION_UNSPECIFIED   = 0,
  OPEN_VIRTUAL_DISK_VERSION_1             = 1 
} OPEN_VIRTUAL_DISK_VERSION;

typedef enum _SET_VIRTUAL_DISK_INFO_VERSION {
  SET_VIRTUAL_DISK_INFO_UNSPECIFIED   = 0,
  SET_VIRTUAL_DISK_INFO_PARENT_PATH   = 1,
  SET_VIRTUAL_DISK_INFO_IDENTIFIER    = 2 
} SET_VIRTUAL_DISK_INFO_VERSION;

typedef enum _STORAGE_DEPENDENCY_INFO_VERSION {
  STORAGE_DEPENDENCY_INFO_VERSION_UNSPECIFIED   = 0,
  STORAGE_DEPENDENCY_INFO_VERSION_1             = 1,
  STORAGE_DEPENDENCY_INFO_VERSION_2             = 2 
} STORAGE_DEPENDENCY_INFO_VERSION;

typedef enum _VIRTUAL_DISK_ACCESS_MASK {
  VIRTUAL_DISK_ACCESS_ATTACH_RO   = 0x00010000,
  VIRTUAL_DISK_ACCESS_ATTACH_RW   = 0x00020000,
  VIRTUAL_DISK_ACCESS_DETACH      = 0x00040000,
  VIRTUAL_DISK_ACCESS_GET_INFO    = 0x00080000,
  VIRTUAL_DISK_ACCESS_CREATE      = 0x00100000,
  VIRTUAL_DISK_ACCESS_METAOPS     = 0x00200000,
  VIRTUAL_DISK_ACCESS_READ        = 0x000d0000,
  VIRTUAL_DISK_ACCESS_ALL         = 0x003f0000,
  VIRTUAL_DISK_ACCESS_WRITABLE    = 0x00320000 
} VIRTUAL_DISK_ACCESS_MASK;

typedef struct _VIRTUAL_STORAGE_TYPE {
  ULONG DeviceId;
  GUID  VendorId;
} VIRTUAL_STORAGE_TYPE, *PVIRTUAL_STORAGE_TYPE;

typedef struct _ATTACH_VIRTUAL_DISK_PARAMETERS {
  ATTACH_VIRTUAL_DISK_VERSION Version;
  __MINGW_EXTENSION union {
    __MINGW_EXTENSION struct {
      ULONG Reserved;
    } Version1;
  } DUMMYUNIONNAME;
} ATTACH_VIRTUAL_DISK_PARAMETERS, *PATTACH_VIRTUAL_DISK_PARAMETERS;

typedef struct _COMPACT_VIRTUAL_DISK_PARAMETERS {
  COMPACT_VIRTUAL_DISK_VERSION Version;
  __MINGW_EXTENSION union {
    __MINGW_EXTENSION struct {
      ULONG Reserved;
    } Version1;
  } DUMMYUNIONNAME;
} COMPACT_VIRTUAL_DISK_PARAMETERS, *PCOMPACT_VIRTUAL_DISK_PARAMETERS;

typedef struct _CREATE_VIRTUAL_DISK_PARAMETERS {
  CREATE_VIRTUAL_DISK_VERSION Version;
  __MINGW_EXTENSION union {
    __MINGW_EXTENSION struct {
      GUID      UniqueId;
      ULONGLONG MaximumSize;
      ULONG     BlockSizeInBytes;
      ULONG     SectorSizeInBytes;
      PCWSTR    ParentPath;
      PCWSTR    SourcePath;
    } Version1;
  } DUMMYUNIONNAME;
} CREATE_VIRTUAL_DISK_PARAMETERS, *PCREATE_VIRTUAL_DISK_PARAMETERS;

typedef struct _EXPAND_VIRTUAL_DISK_PARAMETERS {
  EXPAND_VIRTUAL_DISK_VERSION Version;
  __MINGW_EXTENSION union {
    __MINGW_EXTENSION struct {
      ULONGLONG NewSize;
    } Version1;
  } DUMMYUNIONNAME;
} EXPAND_VIRTUAL_DISK_PARAMETERS, *PEXPAND_VIRTUAL_DISK_PARAMETERS;

typedef struct _GET_VIRTUAL_DISK_INFO {
  GET_VIRTUAL_DISK_INFO_VERSION Version;
  __MINGW_EXTENSION union {
    __MINGW_EXTENSION struct {
      ULONGLONG VirtualSize;
      ULONGLONG PhysicalSize;
      ULONG     BlockSize;
      ULONG     SectorSize;
    } Size;
    GUID                 Identifier;
    __MINGW_EXTENSION struct {
      BOOL  ParentResolved;
      WCHAR ParentLocationBuffer[1];
    } ParentLocation;
    GUID                 ParentIdentifier;
    ULONG                ParentTimestamp;
    VIRTUAL_STORAGE_TYPE VirtualStorageType;
    ULONG                ProviderSubtype;
  } DUMMYUNIONNAME;
} GET_VIRTUAL_DISK_INFO, *PGET_VIRTUAL_DISK_INFO;

typedef struct _MERGE_VIRTUAL_DISK_PARAMETERS {
  MERGE_VIRTUAL_DISK_VERSION Version;
  __MINGW_EXTENSION union {
    __MINGW_EXTENSION struct {
      ULONG MergeDepth;
    } Version1;
  } DUMMYUNIONNAME;
} MERGE_VIRTUAL_DISK_PARAMETERS, *PMERGE_VIRTUAL_DISK_PARAMETERS;

typedef struct _OPEN_VIRTUAL_DISK_PARAMETERS {
  OPEN_VIRTUAL_DISK_VERSION Version;
  __MINGW_EXTENSION union {
    __MINGW_EXTENSION struct {
      ULONG RWDepth;
    } Version1;
  } DUMMYUNIONNAME;
} OPEN_VIRTUAL_DISK_PARAMETERS, *POPEN_VIRTUAL_DISK_PARAMETERS;

typedef struct _SET_VIRTUAL_DISK_INFO {
  SET_VIRTUAL_DISK_INFO_VERSION Version;
  __MINGW_EXTENSION union {
    PCWSTR ParentFilePath;
    GUID   UniqueIdentifier;
  } DUMMYUNIONNAME;
} SET_VIRTUAL_DISK_INFO, *PSET_VIRTUAL_DISK_INFO;

typedef struct _STORAGE_DEPENDENCY_INFO_TYPE_1 {
  DEPENDENT_DISK_FLAG  DependencyTypeFlags;
  ULONG                ProviderSpecificFlags;
  VIRTUAL_STORAGE_TYPE VirtualStorageType;
} STORAGE_DEPENDENCY_INFO_TYPE_1, *PSTORAGE_DEPENDENCY_INFO_TYPE_1;

typedef struct _STORAGE_DEPENDENCY_INFO_TYPE_2 {
  DEPENDENT_DISK_FLAG  DependencyTypeFlags;
  ULONG                ProviderSpecificFlags;
  VIRTUAL_STORAGE_TYPE VirtualStorageType;
  ULONG                AncestorLevel;
  PWSTR                DependencyDeviceName;
  PWSTR                HostVolumeName;
  PWSTR                DependentVolumeName;
  PWSTR                DependentVolumeRelativePath;
} STORAGE_DEPENDENCY_INFO_TYPE_2, *PSTORAGE_DEPENDENCY_INFO_TYPE_2;

/* Fixme: Suppress GCC errors about "error: flexible array member in union" */

typedef struct _STORAGE_DEPENDENCY_INFO {
  STORAGE_DEPENDENCY_INFO_VERSION Version;
  ULONG                           NumberEntries;
  __MINGW_EXTENSION union {
    STORAGE_DEPENDENCY_INFO_TYPE_1 Version1Entries[1];
    STORAGE_DEPENDENCY_INFO_TYPE_2 Version2Entries[1];
  } DUMMYUNIONNAME;
} STORAGE_DEPENDENCY_INFO, *PSTORAGE_DEPENDENCY_INFO;

typedef struct _VIRTUAL_DISK_PROGRESS {
  DWORD     OperationStatus;
  ULONGLONG CurrentValue;
  ULONGLONG CompletionValue;
} VIRTUAL_DISK_PROGRESS, *PVIRTUAL_DISK_PROGRESS;

#define VIRTUAL_STORAGE_TYPE_DEVICE_UNKNOWN 0
#define VIRTUAL_STORAGE_TYPE_DEVICE_ISO 1
#define VIRTUAL_STORAGE_TYPE_DEVICE_VHD 2

DEFINE_GUID(VIRTUAL_STORAGE_TYPE_VENDOR_MICROSOFT,0xEC984AEC,0xA0F9,0x47e9,0x90,0x1F,0x71,0x41,0x5A,0x66,0x34,0x5B);

DWORD WINAPI AttachVirtualDisk(
  HANDLE VirtualDiskHandle,
  PSECURITY_DESCRIPTOR SecurityDescriptor,
  ATTACH_VIRTUAL_DISK_FLAG Flags,
  ULONG ProviderSpecificFlags,
  PATTACH_VIRTUAL_DISK_PARAMETERS Parameters,
  LPOVERLAPPED Overlapped
);

DWORD WINAPI CompactVirtualDisk(
  HANDLE VirtualDiskHandle,
  COMPACT_VIRTUAL_DISK_FLAG Flags,
  PCOMPACT_VIRTUAL_DISK_PARAMETERS Parameters,
  LPOVERLAPPED Overlapped
);

DWORD WINAPI CreateVirtualDisk(
  PVIRTUAL_STORAGE_TYPE VirtualStorageType,
  PCWSTR Path,
  VIRTUAL_DISK_ACCESS_MASK VirtualDiskAccessMask,
  PSECURITY_DESCRIPTOR SecurityDescriptor,
  CREATE_VIRTUAL_DISK_FLAG Flags,
  ULONG ProviderSpecificFlags,
  PCREATE_VIRTUAL_DISK_PARAMETERS Parameters,
  LPOVERLAPPED Overlapped,
  PHANDLE Handle
);

DWORD WINAPI DetachVirtualDisk(
  HANDLE VirtualDiskHandle,
  DETACH_VIRTUAL_DISK_FLAG Flags,
  ULONG ProviderSpecificFlags
);

DWORD WINAPI ExpandVirtualDisk(
  HANDLE VirtualDiskHandle,
  EXPAND_VIRTUAL_DISK_FLAG Flags,
  PEXPAND_VIRTUAL_DISK_PARAMETERS Parameters,
  LPOVERLAPPED Overlapped
);

DWORD WINAPI GetStorageDependencyInformation(
  HANDLE ObjectHandle,
  GET_STORAGE_DEPENDENCY_FLAG Flags,
  ULONG StorageDependencyInfoSize,
  PSTORAGE_DEPENDENCY_INFO StorageDependencyInfo,
  PULONG SizeUsed
);

DWORD WINAPI GetVirtualDiskInformation(
  HANDLE VirtualDiskHandle,
  PULONG VirtualDiskInfoSize,
  PGET_VIRTUAL_DISK_INFO VirtualDiskInfo,
  PULONG SizeUsed
);

DWORD WINAPI GetVirtualDiskOperationProgress(
  HANDLE VirtualDiskHandle,
  LPOVERLAPPED Overlapped,
  PVIRTUAL_DISK_PROGRESS Progress
);

DWORD WINAPI GetVirtualDiskPhysicalPath(
  HANDLE VirtualDiskHandle,
  PULONG DiskPathSizeInBytes,
  PWSTR DiskPath
);

DWORD WINAPI MergeVirtualDisk(
  HANDLE VirtualDiskHandle,
  MERGE_VIRTUAL_DISK_FLAG Flags,
  PMERGE_VIRTUAL_DISK_PARAMETERS Parameters,
  LPOVERLAPPED Overlapped
);

DWORD WINAPI OpenVirtualDisk(
  PVIRTUAL_STORAGE_TYPE VirtualStorageType,
  PCWSTR Path,
  VIRTUAL_DISK_ACCESS_MASK VirtualDiskAccessMask,
  OPEN_VIRTUAL_DISK_FLAG Flags,
  POPEN_VIRTUAL_DISK_PARAMETERS Parameters,
  PHANDLE Handle
);

DWORD WINAPI SetVirtualDiskInformation(
  HANDLE VirtualDiskHandle,
  PSET_VIRTUAL_DISK_INFO VirtualDiskInfo
);

#ifdef __cplusplus
}
#endif
#endif /*(_WIN32_WINNT >= 0x0601)*/
#endif /*_INC_VIRTDISK*/