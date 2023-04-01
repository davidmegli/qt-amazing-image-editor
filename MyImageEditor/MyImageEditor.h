#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyImageEditor.h"

class MyImageEditor : public QMainWindow
{
    Q_OBJECT

public:
    MyImageEditor(QWidget *parent = nullptr);
    ~MyImageEditor();

private:
    Ui::MyImageEditorClass ui;
};
