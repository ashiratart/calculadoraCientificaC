# Projeto: Calculadora Científica em C com Interface Gráfica (GTK + Glade)

## 🎯 Objetivo
Desenvolver uma calculadora científica em linguagem C para um curso no YouTube, começando com as quatro operações básicas e implementando uma interface gráfica com GTK, utilizando o **Glade** para o design visual.

---

## ✅ Etapas já concluídas

### 1. Lógica em C (Terminal)
Foi cirada as funções básicas:
- `adicionar(a, b)`
- `subtrair(a, b)`
- `multiplicar(a, b)`
- `dividir(a, b)` (com verificação de divisão por zero)

Código com `scanf`, `switch` e `printf` foi implementado para entrada e escolha de operação.

---

### 2. Introdução à Interface Gráfica com GTK + Glade
- O Glade será usado para desenhar a interface de forma visual.
- O código C irá carregar o arquivo `.glade` usando `GtkBuilder`.
- As funções de lógica serão conectadas aos botões via `g_signal_connect`.

---

## 🧩 Estrutura do Projeto

```

calculadora/
├── calculadora.glade
└── calculadora.c

```

---

## 📄 Exemplo de Interface com Glade (`calculadora.glade`)

```xml
<?xml version="1.0" encoding="UTF-8"?>
<interface>
  <requires lib="gtk+" version="3.20"/>
  <object class="GtkWindow" id="janela_principal">
    <property name="title">Calculadora</property>
    <property name="default_width">300</property>
    <property name="default_height">200</property>
    <child>
      <object class="GtkBox" id="caixa_principal">
        <property name="orientation">vertical</property>
        <property name="spacing">10</property>
        <property name="margin">20</property>
        <child>
          <object class="GtkEntry" id="entrada1">
            <property name="placeholder_text">Digite o primeiro número</property>
          </object>
        </child>
        <child>
          <object class="GtkEntry" id="entrada2">
            <property name="placeholder_text">Digite o segundo número</property>
          </object>
        </child>
        <child>
          <object class="GtkButton" id="btn_somar">
            <property name="label">Somar</property>
          </object>
        </child>
        <child>
          <object class="GtkLabel" id="lbl_resultado">
            <property name="label">Resultado:</property>
          </object>
        </child>
      </object>
    </child>
  </object>
</interface>

```

---

# 💻 Código C para carregar e usar a interface (`calculadora.c`)

```

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

```

---

# ⚙️ Compilação

```

gcc calculadora.c -o calculadora `pkg-config --cflags --libs gtk+-3.0`

```
---

# 📌 Próximos passos sugeridos

  -  Adicionar botões para subtração, multiplicação e divisão

  -  Melhorar o layout com GtkGrid estilo calculadora tradicional

  -  Tratar erros de entrada (ex: letras, campos vazios)

  -  Mostrar histórico de operações

---

📝 **Autor:** AshiraTart
📅 **Data:** 01 de Maio de 2025
