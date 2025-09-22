//
// Created by otronic on 2025/9/22.
//

#ifndef STUDENTMANSYS_MAINWINDOW_H
#define STUDENTMANSYS_MAINWINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class mainwindow : public QWidget {
Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);

    ~mainwindow() override;

private:
    Ui::mainwindow *ui;
};


#endif //STUDENTMANSYS_MAINWINDOW_H
