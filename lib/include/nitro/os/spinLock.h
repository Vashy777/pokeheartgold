#ifndef NITRO_OS_SPINLOCK_H
#define NITRO_OS_SPINLOCK_H

#include <nitro/hw/consts.h>
#include <nitro/os/common/spinLock_shared.h>

#define OS_MAINP_SYSTEM_LOCK_ID 0x7F
#define OS_SUBP_SYSTEM_LOCK_ID  0xBF

#define OS_MAINP_LOCK_ID_START  0x40
#define OS_SUBP_LOCK_ID_START   0x80

void OS_InitLock(void);
void FUN_037F8CB4(s32 ct);
s32 OSi_DoLockByWord(u16 lockId, OSLockWord *lockp, void (*ctrlFuncp) (void), BOOL disableFiq);
s32 OSi_DoUnlockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp) (void), BOOL disableFIQ);
s32 OSi_DoTryLockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp) (void), BOOL disableFiq);
s32 OS_LockCartridge(u16 lockID);
s32 OS_UnlockCartridge(u16 lockID);
s32 OS_TryLockCartridge(u16 lockID);
void OSi_AllocateCartridgeBus(void);
void OSi_FreeCartridgeBus(void);
u16 OS_ReadOwnerOfLockWord(OSLockWord * lock);
s32 OS_UnLockCartridge(u16 lockID);
s32 OS_GetLockID(void);
void OS_ReleaseLockID(register u16 lockID);
s32 OS_LockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp) (void));
s32 OS_UnlockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp) (void));

#endif //NITRO_OS_SPINLOCK_H
