#include "gtk/gtk.h"

int main(int argc, char **argv) 

{
	//Init GTK:
	//Khởi tạo, - chắc giống như WinMain đó :D.
	gtk_init(&argc, &argv); 
	//Khai báo biến cửa sổ:
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	//Set thuộc tính boder:
	gtk_container_set_border_width(GTK_CONTAINER(window), 10);
	//Set Title:
	gtk_window_set_title(GTK_WINDOW(window), "Linux GUI - Hello World!!!");
	//Set chiều dài, rộng:
	gtk_window_resize(GTK_WINDOW(window), 500, 500);

	//Show Window:
	gtk_widget_show(window);
	//Gtk Main Loop: (giống như glMainLoop() đó :P).
	gtk_main();
	return 0;
};
