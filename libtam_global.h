#ifndef LIBTAM_GLOBAL_H
#define LIBTAM_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBTAM_LIBRARY)
#  define LIBTAM_EXPORT Q_DECL_EXPORT
#else
#  define LIBTAM_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBTAM_GLOBAL_H
