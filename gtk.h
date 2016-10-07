#ifndef INCLUDE_GTK_SWIFT
#define INCLUDE_GTK_SWIFT

typedef int pid_t;

#include <gtk/gtk.h>

typedef void  (*SGGCallback)(GtkWidget*,gpointer);
gulong gtk_connect(GtkWidget *widget, const char * signal, SGGCallback callback, gpointer * data, GConnectFlags flags) {
	return g_signal_connect_data (widget, signal, G_CALLBACK (callback), data, NULL, flags);
}

#endif
