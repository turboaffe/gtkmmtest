#include "mainwindow.h"

#include <iostream>

MainWindow::MainWindow() : m_button("MainWindow") {

    set_border_width(10);

    m_button.signal_clicked().connect(sigc::mem_fun(*this,
        &MainWindow::on_button_clicked));

    add(dr_area);
    dr_area.show();
    //add(m_button);
    //m_button.show();

}


MainWindow::~MainWindow() {

}


void MainWindow::on_button_clicked() {

    std::cout << "Yojooooo" << std::endl;

}
