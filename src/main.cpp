
#include "mainwindow.h"

#include <config.h>
#include <stdio.h>
#include <gtkmm.h>



int main (int argc, char *argv[])
{

    puts ("This is " PACKAGE_STRING ".");
     
    static Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");

    Glib::RefPtr<Gtk::CssProvider> css_provider = Gtk::CssProvider::create();
    css_provider->load_from_path("/home/martin/autotoolstest/src/background.css");

	MainWindow mainwindow;

    mainwindow.set_default_size(200,200);

	auto refStypeContext = mainwindow.get_style_context();
	refStypeContext->add_provider(css_provider,GTK_STYLE_PROVIDER_PRIORITY_APPLICATION );

    return app->run(mainwindow);
    

    return 0;
}
