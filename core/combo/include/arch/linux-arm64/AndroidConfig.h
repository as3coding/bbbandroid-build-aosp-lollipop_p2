/*
 * Copyright (C) 2013 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Android config -- "android-aarch64".  Used for ARM aarch64 device builds.
 */
#ifndef _ANDROID_CONFIG_H
#define _ANDROID_CONFIG_H

/*
 * ===========================================================================
 *                              !!! IMPORTANT !!!
 * ===========================================================================
 *
 * This file is included by ALL C/C++ source files.  Don't put anything in
 * here unless you are absolutely certain it can't go anywhere else.
 *
 * Any C++ stuff must be wrapped with "#ifdef __cplusplus".  Do not use "//"
 * comments.
 */

/*
 * Threading model.  Choose one:
 *
 * HAVE_PTHREADS - use the pthreads library.
 * HAVE_WIN32_THREADS - use Win32 thread primitives.
 *  -- combine HAVE_CREATETHREAD, HAVE_CREATEMUTEX, and HAVE__BEGINTHREADEX
 */
#define HAVE_PTHREADS

/*
 * Process creation model.  Choose one:
 *
 * HAVE_FORKEXEC - use fork() and exec()
 * HAVE_WIN32_PROC - use CreateProcess()
 */
#define HAVE_FORKEXEC

/*
 * Memory-mapping model. Choose one:
 *
 * HAVE_POSIX_FILEMAP - use the Posix sys/mmap.h
 * HAVE_WIN32_FILEMAP - use Win32 filemaps
 */
#define  HAVE_POSIX_FILEMAP

/*
 * Define this if you have <termio.h>
 */
#define  HAVE_TERMIO_H 1

/*
 * Define this if you have sys/uio.h
 */
#define  HAVE_SYS_UIO_H 1

/*
 * Define this if your platforms implements symbolic links
 * in its filesystems
 */
#define HAVE_SYMLINKS

/*
 * Define this if have clock_gettime() and friends
 */
#define HAVE_POSIX_CLOCKS

/*
 * Endianness of the target machine.  Choose one:
 *
 * HAVE_ENDIAN_H -- have endian.h header we can include.
 * HAVE_LITTLE_ENDIAN -- we are little endian.
 * HAVE_BIG_ENDIAN -- we are big endian.
 */
#define HAVE_ENDIAN_H
#define HAVE_LITTLE_ENDIAN

#define _FILE_OFFSET_BITS 64
/* #define _LARGEFILE_SOURCE 1 */

/*
 * Defined if we have the backtrace() call for retrieving a stack trace.
 * Needed for CallStack to operate; if not defined, CallStack is
 * non-functional.
 */
#define HAVE_BACKTRACE 0

/*
 * Defined if we have the sched_setscheduler() call
 */
#define HAVE_SCHED_SETSCHEDULER

/*
 * Add any extra platform-specific defines here.
 */
#ifndef __linux__
#define __linux__
#endif

/*
 * Define if we have <malloc.h> header
 */
#define HAVE_MALLOC_H

/*
 * Define if we're running on *our* linux on device or emulator.
 */
#define HAVE_ANDROID_OS 1

/*
 * Define if we have Linux-style non-filesystem Unix Domain Sockets
 */
#define HAVE_LINUX_LOCAL_SOCKET_NAMESPACE 1

/*
 * Define if we have Linux's inotify in <sys/inotify.h>.
 */
#define HAVE_INOTIFY 1

/*
 * Define if we have madvise() in <sys/mman.h>
 */
#define HAVE_MADVISE 1

/*
 * Define if tm struct has tm_gmtoff field
 */
#define HAVE_TM_GMTOFF 1

/*
 * Define if dirent struct has d_type field
 */
#define HAVE_DIRENT_D_TYPE 1

/*
 * Define if libc includes Android system properties implementation.
 */
#define HAVE_LIBC_SYSTEM_PROPERTIES 1

/*
 * What CPU architecture does this platform use?
 */
#define ARCH_AARCH64

/*
 * sprintf() format string for shared library naming.
 */
#define OS_SHARED_LIB_FORMAT_STR    "lib%s.so"

/*
 * The default path separator for the platform
 */
#define OS_PATH_SEPARATOR '/'

/*
 * Is the filesystem case sensitive?
 */
#define OS_CASE_SENSITIVE

/*
 * Define if <sys/socket.h> exists.
 */
#define HAVE_SYS_SOCKET_H 1

/*
 * Define if the strlcpy() function exists on the system.
 */
#define HAVE_STRLCPY 1

/*
 * Define if the BSD funopen() function exists on the system.
 */
#define HAVE_FUNOPEN 1

/*
 * Define if prctl() exists
 */
#define HAVE_PRCTL 1

/*
 * Define if writev() exists
 */
#define HAVE_WRITEV 1

/*
 * Define if <stdint.h> exists.
 */
#define HAVE_STDINT_H 1

/*
 * Define if <stdbool.h> exists.
 */
#define HAVE_STDBOOL_H 1

/*
 * Define if <sched.h> exists.
 */
#define HAVE_SCHED_H 1

/*
 * Define if pread() exists
 */
#define HAVE_PREAD 1

/*
 * Define if we have st_mtim in struct stat
 */
#define HAVE_STAT_ST_MTIM 1

/*
 * Define if printf() supports %zd for size_t arguments
 */
#define HAVE_PRINTF_ZD 1

#endif /* _ANDROID_CONFIG_H */
