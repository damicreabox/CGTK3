#ifndef INCLUDE_GTK_SWIFT
#define INCLUDE_GTK_SWIFT

typedef int pid_t;

#include <gtk/gtk.h>

typedef void  (*SGGCallback)(GtkWidget*,void *);
gulong gtk_connect(GtkWidget *widget, const char * signal, SGGCallback callback, void * data) {
	return g_signal_connect(widget, signal, G_CALLBACK (callback), data);
}

#endif
