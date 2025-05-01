#include <gtk/gtk.h>

void on_btn_somar_clicked(GtkButton *button, gpointer user_data) {
    GtkEntry *entrada1 = GTK_ENTRY(user_data);
    GtkEntry *entrada2 = g_object_get_data(G_OBJECT(button), "entrada2");
    GtkLabel *resultado = g_object_get_data(G_OBJECT(button), "resultado");

    const gchar *txt1 = gtk_entry_get_text(entrada1);
    const gchar *txt2 = gtk_entry_get_text(entrada2);

    double a = atof(txt1);
    double b = atof(txt2);

    char res[100];
    snprintf(res, sizeof(res), "Resultado: %.2f", a + b);
    gtk_label_set_text(resultado, res);
}

int main(int argc, char *argv[]) {
    GtkBuilder *builder;
    GtkWidget *window;
    GtkWidget *btn_somar, *entrada1, *entrada2, *lbl_resultado;

    gtk_init(&argc, &argv);

    builder = gtk_builder_new_from_file("calculadora.glade");

    window = GTK_WIDGET(gtk_builder_get_object(builder, "janela_principal"));
    btn_somar = GTK_WIDGET(gtk_builder_get_object(builder, "btn_somar"));
    entrada1 = GTK_WIDGET(gtk_builder_get_object(builder, "entrada1"));
    entrada2 = GTK_WIDGET(gtk_builder_get_object(builder, "entrada2"));
    lbl_resultado = GTK_WIDGET(gtk_builder_get_object(builder, "lbl_resultado"));

    g_object_set_data(G_OBJECT(btn_somar), "entrada2", entrada2);
    g_object_set_data(G_OBJECT(btn_somar), "resultado", lbl_resultado);
    g_signal_connect(btn_somar, "clicked", G_CALLBACK(on_btn_somar_clicked), entrada1);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
