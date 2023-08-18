#ifndef EXPORT_DEFINE_H
#define EXPORT_DEFINE_H

#if defined(GGLOBAL_LIBRARY) // for gglobal
#  define G_GLOABL_EXPORT __declspec(dllexport)
#else
#  define G_GLOABL_EXPORT __declspec(dllimport)
#endif

#if defined(GUTILITY_LIBRARY) // for gutility
#  define G_UTILITY_EXPORT __declspec(dllexport)
#else
#  define G_UTILITY_EXPORT __declspec(dllimport)
#endif

#if defined(GWIDGET_LIBRARY) // for gwidget
#  define G_WIDGET_EXPORT __declspec(dllexport)
#else
#  define G_WIDGET_EXPORT __declspec(dllimport)
#endif

#endif
