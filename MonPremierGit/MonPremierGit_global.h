#ifndef MONPREMIERGIT_GLOBAL_H
#define MONPREMIERGIT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MONPREMIERGIT_LIBRARY)
#  define MONPREMIERGITSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MONPREMIERGITSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MONPREMIERGIT_GLOBAL_H
