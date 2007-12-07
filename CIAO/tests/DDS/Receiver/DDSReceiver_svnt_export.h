
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl -s DDSRECEIVER_SVNT
// ------------------------------
#ifndef DDSRECEIVER_SVNT_EXPORT_H
#define DDSRECEIVER_SVNT_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (DDSRECEIVER_SVNT_HAS_DLL)
#  define DDSRECEIVER_SVNT_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && DDSRECEIVER_SVNT_HAS_DLL */

#if !defined (DDSRECEIVER_SVNT_HAS_DLL)
#  define DDSRECEIVER_SVNT_HAS_DLL 1
#endif /* ! DDSRECEIVER_SVNT_HAS_DLL */

#if defined (DDSRECEIVER_SVNT_HAS_DLL) && (DDSRECEIVER_SVNT_HAS_DLL == 1)
#  if defined (DDSRECEIVER_SVNT_BUILD_DLL)
#    define DDSRECEIVER_SVNT_Export ACE_Proper_Export_Flag
#    define DDSRECEIVER_SVNT_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define DDSRECEIVER_SVNT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* DDSRECEIVER_SVNT_BUILD_DLL */
#    define DDSRECEIVER_SVNT_Export ACE_Proper_Import_Flag
#    define DDSRECEIVER_SVNT_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define DDSRECEIVER_SVNT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* DDSRECEIVER_SVNT_BUILD_DLL */
#else /* DDSRECEIVER_SVNT_HAS_DLL == 1 */
#  define DDSRECEIVER_SVNT_Export
#  define DDSRECEIVER_SVNT_SINGLETON_DECLARATION(T)
#  define DDSRECEIVER_SVNT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* DDSRECEIVER_SVNT_HAS_DLL == 1 */

// Set DDSRECEIVER_SVNT_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (DDSRECEIVER_SVNT_NTRACE)
#  if (ACE_NTRACE == 1)
#    define DDSRECEIVER_SVNT_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define DDSRECEIVER_SVNT_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !DDSRECEIVER_SVNT_NTRACE */

#if (DDSRECEIVER_SVNT_NTRACE == 1)
#  define DDSRECEIVER_SVNT_TRACE(X)
#else /* (DDSRECEIVER_SVNT_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define DDSRECEIVER_SVNT_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (DDSRECEIVER_SVNT_NTRACE == 1) */

#endif /* DDSRECEIVER_SVNT_EXPORT_H */

// End of auto generated file.
