#include <winternl.h>

typedef NTSTATUS(WINAPI *NTQUERYINFOPROC)(
	HANDLE           ProcessHandle,
	PROCESSINFOCLASS ProcessInformationClass,
	PVOID            ProcessInformation,
	ULONG            ProcessInformationLength,
	PULONG           ReturnLength
	);

unsigned char data[123] = {}; // Bytes to Inject
